#include "game_manager.hpp"
#include <glm/gtc/type_ptr.hpp>
#include <chrono>
#include <thread>
#include "event_system.hpp"




void glfwWindowSizeCallback(GLFWwindow* pWindow, int wight, int height) {
	settings.set_x_window_size(wight);
	settings.set_y_window_size(height);
	glViewport(0, 0, settings.get_x_window_size(), settings.get_y_window_size());
}

void glfwKeyCallback(GLFWwindow* pWindow, int key, int scancode, int action, int mode) {
	if (settings.is_there_a_key(key) && action == GLFW_PRESS) {
		settings.change_key_state(key, true);
	}
	if (settings.is_there_a_key(key) && action == GLFW_RELEASE) {
		settings.change_key_state(key, false);
	}
	if (settings.get_key_state(GLFW_KEY_ESCAPE)) {
		glfwSetWindowShouldClose(pWindow, GL_TRUE);
	}
}



std::vector<std::vector<char>> default_map = {
	{'w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','w','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','w','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','v','2','2','2','v','v','v','v','v','v','w','v','v','v','v','v','4','4','4','v','v','w'},
	{'w','v','2','2','2','v','v','v','v','v','v','w','v','v','v','v','v','4','4','4','v','v','w'},
	{'w','v','2','d','2','v','v','v','v','v','v','w','v','v','v','v','v','4','d','4','v','v','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','w','w','w','w','w','v','v','v','v','v','v','v','v','v','v','v','w','w','w','w','w','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','v','1','d','1','v','v','v','v','v','v','w','v','v','v','v','v','3','d','3','v','v','w'},
	{'w','v','1','1','1','v','v','v','v','v','v','w','v','v','v','v','v','3','3','3','v','v','w'},
	{'w','v','1','1','1','v','v','v','v','v','v','w','v','v','v','v','v','3','3','3','v','v','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','w','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','w','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w'}
};





Game_Manager::Game_Manager(std::shared_ptr<Render::Shader_Program> pDefault_shader, GLuint& vao_player, GLuint& vao_wall, GLuint& vao_text)
	: p_shader(pDefault_shader)
{
	if (quantity_game_managers == 0) {
		add_map(vao_wall, default_map, "default");
	}
	quantity_game_managers++;
	select_map("default");

	text_map.emplace("Score", std::make_shared<Text>("Ñ÷¸ò", 0.0f, 0.0f, 0.0f, vao_text, p_shader, text_to_matrix, 
		glm::mat4(glm::translate(glm::mat4(1.0f), glm::vec3(x_text_position, y_text_position, 0.0))))).first->second;

	global_position_location = glGetUniformLocation(p_shader->get_shader_program_ID(), "global_position");
	players_control_key = settings.get_players_control_key();
	update_game_matrix = std::chrono::steady_clock::now();

	this->vao_player = &vao_player;
	this->vao_wall = &vao_wall;
	this->vao_text = &vao_text;

}

void Game_Manager::game_tick()
{
		tick_i++;

		if (settings.get_key_state(players_control_key[0][0]) && (temp_p1_move_down == 0 && temp_p1_move_left == 0 && temp_p1_move_right == 0)) {
			player_map[1]->rotate(UP);
			if (!chek_player_for_carpentry(1, UP)) {
				player_map[1]->move(UP);			temp_p1_move_up++;
			}
		}
		else if (settings.get_key_state(players_control_key[0][1]) && (temp_p1_move_up == 0 && temp_p1_move_left == 0 && temp_p1_move_right == 0)) {
			player_map[1]->rotate(DOWN);
			if (!chek_player_for_carpentry(1,DOWN)) {
				player_map[1]->move(DOWN);	temp_p1_move_down++;
			}
		}
		else if (settings.get_key_state(players_control_key[0][2]) && (temp_p1_move_down == 0 && temp_p1_move_up == 0 && temp_p1_move_right == 0)) {
			player_map[1]->rotate(LEFT);
			if (!chek_player_for_carpentry(1, LEFT)) {
				player_map[1]->move(LEFT);	temp_p1_move_left++;
			}
		}
		else if (settings.get_key_state(players_control_key[0][3]) && (temp_p1_move_down == 0 && temp_p1_move_left == 0 && temp_p1_move_up == 0)) {
			player_map[1]->rotate(RIGHT);
			if (!chek_player_for_carpentry(1, RIGHT)) {
				player_map[1]->move(RIGHT);	temp_p1_move_right++;
			}
		}
		if (settings.get_key_state(players_control_key[0][4])) { temp_p1_shoot++; }

		if (settings.get_key_state(players_control_key[1][0]) && (temp_p2_move_down == 0 && temp_p2_move_left == 0 && temp_p2_move_right == 0)) { 
			player_map[2]->rotate(UP);
			if (!chek_player_for_carpentry(2, UP)) {
				player_map[2]->move(UP);
				temp_p2_move_up++;
			}
		}
		else if (settings.get_key_state(players_control_key[1][1]) && (temp_p2_move_up == 0 && temp_p2_move_left == 0 && temp_p2_move_right == 0)) { 
			player_map[2]->rotate(DOWN);
			if (!chek_player_for_carpentry(2, DOWN)) {
				player_map[2]->move(DOWN);
				temp_p2_move_down++;
			}
		}
		else if (settings.get_key_state(players_control_key[1][2]) && (temp_p2_move_down == 0 && temp_p2_move_up == 0 && temp_p2_move_right == 0)) { 
			player_map[2]->rotate(LEFT);
			if (!chek_player_for_carpentry(2, LEFT)) {
				player_map[2]->move(LEFT);
				temp_p2_move_left++;
			}
		}
		else if (settings.get_key_state(players_control_key[1][3]) && (temp_p2_move_down == 0 && temp_p2_move_left == 0 && temp_p2_move_up == 0)) { 
			player_map[2]->rotate(RIGHT);
			if (!chek_player_for_carpentry(2, RIGHT)) {
				player_map[2]->move(RIGHT);
				temp_p2_move_right++;
			}
		}
		if (settings.get_key_state(players_control_key[1][4])) { temp_p2_shoot++; }

		if (settings.get_key_state(players_control_key[2][0]) && (temp_p3_move_down == 0 && temp_p3_move_left == 0 && temp_p3_move_right == 0)) {
			player_map[3]->rotate(UP);
			if (!chek_player_for_carpentry(3, UP)) {
				player_map[3]->move(UP);
				temp_p3_move_up++;
			}
		}
		else if (settings.get_key_state(players_control_key[2][1]) && (temp_p3_move_up == 0 && temp_p3_move_left == 0 && temp_p3_move_right == 0)) {
			player_map[3]->rotate(DOWN);
			if (!chek_player_for_carpentry(3, DOWN)) {
				player_map[3]->move(DOWN);
				temp_p3_move_down++;
			}
		}
		else if (settings.get_key_state(players_control_key[2][2]) && (temp_p3_move_down == 0 && temp_p3_move_up == 0 && temp_p3_move_right == 0)) {
			player_map[3]->rotate(LEFT);
			if (!chek_player_for_carpentry(3, LEFT)) {
				player_map[3]->move(LEFT);
				temp_p3_move_left++;
			}
		}
		else if (settings.get_key_state(players_control_key[2][3]) && (temp_p3_move_down == 0 && temp_p3_move_left == 0 && temp_p3_move_up == 0)) {
			player_map[3]->rotate(RIGHT);
			if (!chek_player_for_carpentry(3, RIGHT)) {
				player_map[3]->move(RIGHT);
				temp_p3_move_right++;
			}
		}
		if (settings.get_key_state(players_control_key[2][4])) { temp_p3_shoot++; }

		if (settings.get_key_state(players_control_key[3][0]) && (temp_p4_move_down == 0 && temp_p4_move_left == 0 && temp_p4_move_right == 0)) {
			player_map[4]->rotate(UP);
			if (!chek_player_for_carpentry(4, UP)) {
				player_map[4]->move(UP);
				temp_p4_move_up++;
			}
		}
		else if (settings.get_key_state(players_control_key[3][1]) && (temp_p4_move_up == 0 && temp_p4_move_left == 0 && temp_p4_move_right == 0)) {
			player_map[4]->rotate(DOWN);
			if (!chek_player_for_carpentry(4, DOWN)) {
				player_map[4]->move(DOWN);
				temp_p4_move_down++;
			}
		}
		else if (settings.get_key_state(players_control_key[3][2]) && (temp_p4_move_down == 0 && temp_p4_move_up == 0 && temp_p4_move_right == 0)) {
			player_map[4]->rotate(LEFT);
			if (!chek_player_for_carpentry(4, LEFT)) {
				player_map[4]->move(LEFT);
				temp_p4_move_left++;
			}
		}
		else if (settings.get_key_state(players_control_key[3][3]) && (temp_p4_move_down == 0 && temp_p4_move_left == 0 && temp_p4_move_up == 0)) {
			player_map[4]->rotate(RIGHT);
			if (!chek_player_for_carpentry(4, RIGHT)) {
				player_map[4]->move(RIGHT);
				temp_p4_move_right++;
			}
		}
		if (settings.get_key_state(players_control_key[3][4])) { temp_p4_shoot++; }


		if ((tick_i%tick)==0) {
			if (temp_p1_move_up >= tick) {
				move_player_on_matrix(1, UP);
			}
			else if (temp_p1_move_down >= tick) {
				move_player_on_matrix(1, DOWN);
			}
			else if (temp_p1_move_left >= tick) {
				move_player_on_matrix(1, LEFT);
			}
			else if (temp_p1_move_right >= tick) {
				move_player_on_matrix(1, RIGHT);
			}
			else
			{
				player_map[1]->move_back(UP, temp_p1_move_up);
				player_map[1]->move_back(DOWN, temp_p1_move_down);
				player_map[1]->move_back(LEFT, temp_p1_move_left);
				player_map[1]->move_back(RIGHT, temp_p1_move_right);
			}

			if (temp_p2_move_up >= tick) {
				move_player_on_matrix(2, UP);
			}
			else if (temp_p2_move_down >= tick) {
				move_player_on_matrix(2, DOWN);
			}
			else if (temp_p2_move_left >= tick) {
				move_player_on_matrix(2, LEFT);
			}
			else if (temp_p2_move_right >= tick) {
				move_player_on_matrix(2, RIGHT);
			}
			else
			{
				player_map[2]->move_back(UP, temp_p2_move_up);
				player_map[2]->move_back(DOWN, temp_p2_move_down);
				player_map[2]->move_back(LEFT, temp_p2_move_left);
				player_map[2]->move_back(RIGHT, temp_p2_move_right);
			}

			if (temp_p3_move_up >= tick) {
				move_player_on_matrix(3, UP);
			}
			else if (temp_p3_move_down >= tick) {
				move_player_on_matrix(3, DOWN);
			}
			else if (temp_p3_move_left >= tick) {
				move_player_on_matrix(3, LEFT);
			}
			else if (temp_p3_move_right >= tick) {
				move_player_on_matrix(3, RIGHT);
			}
			else
			{
				player_map[3]->move_back(UP, temp_p3_move_up);
				player_map[3]->move_back(DOWN, temp_p3_move_down);
				player_map[3]->move_back(LEFT, temp_p3_move_left);
				player_map[3]->move_back(RIGHT, temp_p3_move_right);
			}

			if (temp_p4_move_up >= tick) {
				move_player_on_matrix(4, UP);
			}
			else if (temp_p4_move_down >= tick) {
				move_player_on_matrix(4, DOWN);
			}
			else if (temp_p4_move_left >= tick) {
				move_player_on_matrix(4, LEFT);
			}
			else if (temp_p4_move_right >= tick) {
				move_player_on_matrix(4, RIGHT);
			}
			else
			{
				player_map[4]->move_back(UP, temp_p4_move_up);
				player_map[4]->move_back(DOWN, temp_p4_move_down);
				player_map[4]->move_back(LEFT, temp_p4_move_left);
				player_map[4]->move_back(RIGHT, temp_p4_move_right);
			}

			temp_p1_move_up = 0;
			temp_p1_move_down = 0;
			temp_p1_move_left = 0;
			temp_p1_move_right = 0;
			temp_p2_move_up = 0;
			temp_p2_move_down = 0;
			temp_p2_move_left = 0;
			temp_p2_move_right = 0;
			temp_p3_move_up = 0;
			temp_p3_move_down = 0;
			temp_p3_move_left = 0;
			temp_p3_move_right = 0;
			temp_p4_move_up = 0;
			temp_p4_move_down = 0;
			temp_p4_move_left = 0;
			temp_p4_move_right = 0;
		}

		if (tick_i % gun_reload == 0) {
			if (temp_p1_shoot != 0) {
				player_shoot(1);
				temp_p1_shoot = 0;
			}
			if (temp_p2_shoot != 0) {
				player_shoot(2);
				temp_p2_shoot = 0;
			}
			if (temp_p3_shoot != 0) {
				player_shoot(3);
				temp_p3_shoot = 0;
			}
			if (temp_p4_shoot != 0) {
				player_shoot(4);
				temp_p4_shoot = 0;
			}
		}

		if (tick_i % bullet_tick == 0) {

		}

		if (tick_i == 60) {
			tick_i = 0;
		}
}

bool Game_Manager::add_player(GLuint& vao_player, std::string nickname, GLuint& vao_text)
{
	if (quantity_player == 4) {
		return false;
	}
	quantity_player++;

	player_map.emplace(quantity_player, std::make_shared<Player>(p_shader, current_map->get_player_spawnpoint(quantity_player, 'x'),
		current_map->get_player_spawnpoint(quantity_player, 'y'), vao_player, nickname, current_map->get_scale_models(),
		current_map->get_spawn_direction(quantity_player))).first->second;

	score_map.emplace(nickname, 0).first->second;

	text_map.emplace(std::to_string(quantity_player), std::make_shared<Text>(nickname+" — "+std::to_string(score_map[nickname]), 
		player_map[quantity_player]->get_red(), player_map[quantity_player]->get_green(), player_map[quantity_player]->get_blue(), 
		vao_text, p_shader, text_to_matrix, glm::mat4(glm::translate(glm::mat4(1.0f), 
			glm::vec3(x_text_position, (y_text_position - (y_text_step_position * (quantity_player + 1))), 0.0))))).first->second;

	return true;
}

void Game_Manager::add_map(GLuint& vao, std::vector<std::vector<char>> map, std::string name_map) 
{
	map_of_map.emplace(name_map, std::make_shared<Map>(map, vao, p_shader)).first->second;
}

bool Game_Manager::select_map(std::string name_map)
{
	if (map_of_map.count(name_map)) {
		current_map = map_of_map[name_map];
		game_map = current_map->get_map();
		players_position_on_map[0][0] = current_map->get_spawn_players_in_game_matrix(1, 'x');
		players_position_on_map[0][1] = current_map->get_spawn_players_in_game_matrix(1, 'y');
		players_position_on_map[1][0] = current_map->get_spawn_players_in_game_matrix(2, 'x');
		players_position_on_map[1][1] = current_map->get_spawn_players_in_game_matrix(2, 'y');
		players_position_on_map[2][0] = current_map->get_spawn_players_in_game_matrix(3, 'x');
		players_position_on_map[2][1] = current_map->get_spawn_players_in_game_matrix(3, 'y');
		players_position_on_map[3][0] = current_map->get_spawn_players_in_game_matrix(4, 'x');
		players_position_on_map[3][1] = current_map->get_spawn_players_in_game_matrix(4, 'y');
		return true;
	}
	else {
		return false;
	}
}

void Game_Manager::player_shoot(int num_player)
{
	int temp[2];
	Model_Direction temp_direction = player_map[num_player]->get_direction();
	switch (temp_direction) {
	case UP:
		temp[0] = players_position_on_map[num_player - 1][0];
		temp[1] = (players_position_on_map[num_player - 1][1] - 2); 
		break;
	case DOWN:
		temp[0] = players_position_on_map[num_player - 1][0];
		temp[1] = (players_position_on_map[num_player - 1][1] + 2);
		break;
	case LEFT:
		temp[0] = (players_position_on_map[num_player - 1][0] - 2);
		temp[1] = players_position_on_map[num_player - 1][1];
		break;
	case RIGHT:
		temp[0] = (players_position_on_map[num_player - 1][0] + 2);
		temp[1] = players_position_on_map[num_player - 1][1];
		break;
	default:
		return;
	}

	if (temp[0] < 0 || temp[0] > game_map[0].size()) {
		return;
	}
	else if (temp[1] < 0 || temp[1] > game_map.size()) {
		return;
	}

	if (game_map[temp[1]][temp[0]] == 'd') {
		switch (temp_direction)
		{
		case UP:
			temp[1]--;
			break;
		case DOWN:
			temp[1]++;
			break;
		case LEFT:
			temp[0]--;
			break;
		case RIGHT:
			temp[0]++;
			break;
		default:
			return;
		}
	}

	if (game_map[temp[1]][temp[0]] == 'w') {
		return;
	}
	else if (game_map[temp[1]][temp[0]] == '1') {
		player_map[1]->set_alive(false);
		return;
	}
	else if (game_map[temp[1]][temp[0]] == '2') {
		player_map[2]->set_alive(false);
		return;
	}
	else if (game_map[temp[1]][temp[0]] == '3') {
		player_map[3]->set_alive(false);
		return;
	}
	else if (game_map[temp[1]][temp[0]] == '4') {
		player_map[4]->set_alive(false);
		return;
	}
	else if (game_map[temp[1]][temp[0]] == 'b') {
		for (int i = 0; i < bullets.size(); i++) {
			if (temp[0] == bullets[i]->get_position_on_map('x') && temp[1] == bullets[i]->get_position_on_map('y')) {
				auto iter = bullets.cbegin();
				iter = iter + i;
				bullets.erase(iter);
				return;
			}
		}
	}

	game_map[temp[1]][temp[0]] = 'b';
	float temp_x_coordinate, temp_y_coordinate;



	if (temp[1] < ((game_map.size() / 2)) && temp[0] < ((game_map[temp[1]].size() / 2))) {
		temp_x_coordinate = ((((0.95 / (game_map[temp[1]].size() / 2)) * ((game_map[temp[1]].size() / 2) - temp[0])) / 1.77777778) * (-1));
		temp_y_coordinate = ((0.95 / (game_map.size() / 2)) * ((game_map.size() / 2) - temp[1]));
	}
	else if (temp[1] < ((game_map.size() / 2)) && temp[0] == ((game_map[temp[1]].size() / 2))) {
		temp_x_coordinate = 0.0;
		temp_y_coordinate = ((0.95 / (game_map.size() / 2)) * ((game_map.size() / 2) - temp[1]));
	}
	else if (temp[1] < ((game_map.size() / 2)) && temp[0] > ((game_map[temp[1]].size() / 2))) {
		temp_x_coordinate = (((0.95 / (game_map[temp[1]].size() / 2)) * (temp[0] - (game_map[temp[1]].size() / 2))) / 1.77777778);
		temp_y_coordinate = ((0.95 / (game_map.size() / 2)) * ((game_map.size() / 2) - temp[1]));
	}


	else if (temp[1] == ((game_map.size() / 2)) && temp[0] < ((game_map[temp[1]].size() / 2))) {
		temp_x_coordinate = ((((0.95 / (game_map[temp[1]].size() / 2)) * ((game_map[temp[1]].size() / 2) - temp[0])) / 1.77777778) * (-1));
		temp_y_coordinate = 0.0;
	}
	else if (temp[1] == ((game_map.size() / 2)) && temp[0] == ((game_map[temp[1]].size() / 2))) {
		temp_x_coordinate = 0.0;
		temp_y_coordinate = 0.0;
	}
	else if (temp[1] == (game_map.size() / 2) && temp[0] > (game_map[temp[1]].size() / 2)) {
		temp_x_coordinate = (((0.95 / (game_map[temp[1]].size() / 2)) * (temp[0] - (game_map[temp[1]].size() / 2))) / 1.77777778);
		temp_y_coordinate = 0.0;
	}


	else if (temp[1] > ((game_map.size() / 2)) && temp[0] < ((game_map[temp[1]].size() / 2))) {
		temp_x_coordinate = ((((0.95 / (game_map[temp[1]].size() / 2)) * ((game_map[temp[1]].size() / 2) - temp[0])) / 1.77777778) * (-1));
		temp_y_coordinate = (((0.95 / (game_map.size() / 2)) * (temp[1] - (game_map.size() / 2))) * (-1));
	}
	else if (temp[1] > ((game_map.size() / 2)) && temp[0] == ((game_map[temp[1]].size() / 2))) {
		temp_x_coordinate = 0.0;
		temp_y_coordinate = (((0.95 / (game_map.size() / 2)) * (temp[1] - (game_map.size() / 2))) * (-1));
	}
	else if (temp[1] > ((game_map.size() / 2)) && temp[0] > ((game_map[temp[1]].size() / 2))) {
		temp_x_coordinate = (((0.95 / (game_map[temp[1]].size() / 2)) * (temp[0] - (game_map[temp[1]].size() / 2))) / 1.77777778);
		temp_y_coordinate = (((0.95 / (game_map.size() / 2)) * (temp[1] - (game_map.size() / 2))) * (-1));
	}



	bullets.push_back(std::make_shared<Bullet>(p_shader, temp_x_coordinate, temp_y_coordinate, player_map[num_player]->get_red(),
		player_map[num_player]->get_green(), player_map[num_player]->get_blue(), current_map->get_scale_models(), temp_direction,
		*vao_player, temp[0], temp[1]));
}

void Game_Manager::draw_objects() 
{
	if (quantity_player != 4) {
		return;
	}
	p_shader->use();
	glUniformMatrix4fv(global_position_location, 1, GL_FALSE, glm::value_ptr(game_area_pos));
	current_map->draw(*this->vao_wall);
	player_map[1]->draw(*this->vao_player);
	player_map[2]->draw(*this->vao_player);
	player_map[3]->draw(*this->vao_player);
	player_map[4]->draw(*this->vao_player);
	for (int i = 0; i < bullets.size(); i++) {
		bullets[i]->draw(*this->vao_player);
	}
	glUniformMatrix4fv(global_position_location, 1, GL_FALSE, glm::value_ptr(glm::mat4(1.0)));
	text_map["Score"]->draw(*this->vao_text);
	text_map[std::to_string(1)]->draw(*this->vao_text);
	text_map[std::to_string(2)]->draw(*this->vao_text);
	text_map[std::to_string(3)]->draw(*this->vao_text);
	text_map[std::to_string(4)]->draw(*this->vao_text);
}

Game_Manager::~Game_Manager()
{
	quantity_game_managers--;
	quantity_player = 0;
	player_map.clear();
	map_of_map.clear();
	text_map.clear();
}

bool Game_Manager::chek_player_for_carpentry(int num_player, Model_Direction direction)
{
	switch (direction)
	{
	case UP:
		if ((game_map[(players_position_on_map[(num_player - 1)][1] - 2)][(players_position_on_map[(num_player - 1)][0] - 1)] == 'w' ||
			game_map[(players_position_on_map[(num_player - 1)][1] - 2)][players_position_on_map[(num_player - 1)][0]] == 'w' ||
			game_map[(players_position_on_map[(num_player - 1)][1] - 2)][(players_position_on_map[(num_player - 1)][0] + 1)] == 'w') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] - 2)][(players_position_on_map[(num_player - 1)][0] - 1)] == '1' ||
				game_map[(players_position_on_map[(num_player - 1)][1] - 2)][players_position_on_map[(num_player - 1)][0]] == '1' ||
				game_map[(players_position_on_map[(num_player - 1)][1] - 2)][(players_position_on_map[(num_player - 1)][0] + 1)] == '1') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] - 2)][(players_position_on_map[(num_player - 1)][0] - 1)] == '2' ||
				game_map[(players_position_on_map[(num_player - 1)][1] - 2)][players_position_on_map[(num_player - 1)][0]] == '2' ||
				game_map[(players_position_on_map[(num_player - 1)][1] - 2)][(players_position_on_map[(num_player - 1)][0] + 1)] == '2') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] - 2)][(players_position_on_map[(num_player - 1)][0] - 1)] == '3' ||
				game_map[(players_position_on_map[(num_player - 1)][1] - 2)][players_position_on_map[(num_player - 1)][0]] == '3' ||
				game_map[(players_position_on_map[(num_player - 1)][1] - 2)][(players_position_on_map[(num_player - 1)][0] + 1)] == '3') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] - 2)][(players_position_on_map[(num_player - 1)][0] - 1)] == '4' ||
				game_map[(players_position_on_map[(num_player - 1)][1] - 2)][players_position_on_map[(num_player - 1)][0]] == '4' ||
				game_map[(players_position_on_map[(num_player - 1)][1] - 2)][(players_position_on_map[(num_player - 1)][0] + 1)] == '4') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] - 2)][(players_position_on_map[(num_player - 1)][0] - 1)] == 'd' ||
				game_map[(players_position_on_map[(num_player - 1)][1] - 2)][players_position_on_map[(num_player - 1)][0]] == 'd' ||
				game_map[(players_position_on_map[(num_player - 1)][1] - 2)][(players_position_on_map[(num_player - 1)][0] + 1)] == 'd')) {
			return true;
		}
		return false;
	case DOWN:
		if ((game_map[(players_position_on_map[(num_player - 1)][1] + 2)][(players_position_on_map[(num_player - 1)][0] - 1)] == 'w' ||
			game_map[(players_position_on_map[(num_player - 1)][1] + 2)][players_position_on_map[(num_player - 1)][0]] == 'w' ||
			game_map[(players_position_on_map[(num_player - 1)][1] + 2)][(players_position_on_map[(num_player - 1)][0] + 1)] == 'w') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] + 2)][(players_position_on_map[(num_player - 1)][0] - 1)] == '1' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 2)][players_position_on_map[(num_player - 1)][0]] == '1' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 2)][(players_position_on_map[(num_player - 1)][0] + 1)] == '1') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] + 2)][(players_position_on_map[(num_player - 1)][0] - 1)] == '2' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 2)][players_position_on_map[(num_player - 1)][0]] == '2' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 2)][(players_position_on_map[(num_player - 1)][0] + 1)] == '2') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] + 2)][(players_position_on_map[(num_player - 1)][0] - 1)] == '3' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 2)][players_position_on_map[(num_player - 1)][0]] == '3' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 2)][(players_position_on_map[(num_player - 1)][0] + 1)] == '3') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] + 2)][(players_position_on_map[(num_player - 1)][0] - 1)] == '4' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 2)][players_position_on_map[(num_player - 1)][0]] == '4' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 2)][(players_position_on_map[(num_player - 1)][0] + 1)] == '4') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] + 2)][(players_position_on_map[(num_player - 1)][0] - 1)] == 'd' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 2)][players_position_on_map[(num_player - 1)][0]] == 'd' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 2)][(players_position_on_map[(num_player - 1)][0] + 1)] == 'd')) {
			return true;
		}
		return false;
	case LEFT:
		if ((game_map[(players_position_on_map[(num_player - 1)][1] - 1)][(players_position_on_map[(num_player - 1)][0] - 2)] == 'w' ||
			game_map[players_position_on_map[(num_player - 1)][1]][(players_position_on_map[(num_player - 1)][0] - 2)] == 'w' ||
			game_map[(players_position_on_map[(num_player - 1)][1] + 1)][(players_position_on_map[(num_player - 1)][0] - 2)] == 'w') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] - 1)][(players_position_on_map[(num_player - 1)][0] - 2)] == '1' ||
				game_map[players_position_on_map[(num_player - 1)][1]][(players_position_on_map[(num_player - 1)][0] - 2)] == '1' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 1)][(players_position_on_map[(num_player - 1)][0] - 2)] == '1') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] - 1)][(players_position_on_map[(num_player - 1)][0] - 2)] == '2' ||
				game_map[players_position_on_map[(num_player - 1)][1]][(players_position_on_map[(num_player - 1)][0] - 2)] == '2' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 1)][(players_position_on_map[(num_player - 1)][0] - 2)] == '2') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] - 1)][(players_position_on_map[(num_player - 1)][0] - 2)] == '3' ||
				game_map[players_position_on_map[(num_player - 1)][1]][(players_position_on_map[(num_player - 1)][0] - 2)] == '3' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 1)][(players_position_on_map[(num_player - 1)][0] - 2)] == '3') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] - 1)][(players_position_on_map[(num_player - 1)][0] - 2)] == '4' ||
				game_map[players_position_on_map[(num_player - 1)][1]][(players_position_on_map[(num_player - 1)][0] - 2)] == '4' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 1)][(players_position_on_map[(num_player - 1)][0] - 2)] == '4') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] - 1)][(players_position_on_map[(num_player - 1)][0] - 2)] == 'd' ||
				game_map[players_position_on_map[(num_player - 1)][1]][(players_position_on_map[(num_player - 1)][0] - 2)] == 'd' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 1)][(players_position_on_map[(num_player - 1)][0] - 2)] == 'd')) {
			return true;
		}
		return false;
	case RIGHT:
		if ((game_map[(players_position_on_map[(num_player - 1)][1] - 1)][(players_position_on_map[(num_player - 1)][0] + 2)] == 'w' ||
			game_map[players_position_on_map[(num_player - 1)][1]][(players_position_on_map[(num_player - 1)][0] + 2)] == 'w' ||
			game_map[(players_position_on_map[(num_player - 1)][1] + 1)][(players_position_on_map[(num_player - 1)][0] + 2)] == 'w') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] - 1)][(players_position_on_map[(num_player - 1)][0] + 2)] == '1' ||
				game_map[players_position_on_map[(num_player - 1)][1]][(players_position_on_map[(num_player - 1)][0] + 2)] == '1' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 1)][(players_position_on_map[(num_player - 1)][0] + 2)] == '1') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] - 1)][(players_position_on_map[(num_player - 1)][0] + 2)] == '2' ||
				game_map[players_position_on_map[(num_player - 1)][1]][(players_position_on_map[(num_player - 1)][0] + 2)] == '2' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 1)][(players_position_on_map[(num_player - 1)][0] + 2)] == '2') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] - 1)][(players_position_on_map[(num_player - 1)][0] + 2)] == '3' ||
				game_map[players_position_on_map[(num_player - 1)][1]][(players_position_on_map[(num_player - 1)][0] + 2)] == '3' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 1)][(players_position_on_map[(num_player - 1)][0] + 2)] == '3') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] - 1)][(players_position_on_map[(num_player - 1)][0] + 2)] == '4' ||
				game_map[players_position_on_map[(num_player - 1)][1]][(players_position_on_map[(num_player - 1)][0] + 2)] == '4' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 1)][(players_position_on_map[(num_player - 1)][0] + 2)] == '4') ||

			(game_map[(players_position_on_map[(num_player - 1)][1] - 1)][(players_position_on_map[(num_player - 1)][0] + 2)] == 'd' ||
				game_map[players_position_on_map[(num_player - 1)][1]][(players_position_on_map[(num_player - 1)][0] + 2)] == 'd' ||
				game_map[(players_position_on_map[(num_player - 1)][1] + 1)][(players_position_on_map[(num_player - 1)][0] + 2)] == 'd')) {
			return true;
		}
		return false;
	default:
		return false;
	}
}

bool Game_Manager::move_player_on_matrix(int num_player, Model_Direction direction)
{
	char temp;

	switch (direction)
	{
	case UP:

		temp = game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] - 1)];
		game_map[(players_position_on_map[num_player - 1][1] - 2)][(players_position_on_map[num_player - 1][0] - 1)] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0])];
		game_map[(players_position_on_map[num_player - 1][1] - 2)][(players_position_on_map[num_player - 1][0])] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] + 1)];
		game_map[(players_position_on_map[num_player - 1][1] - 2)][(players_position_on_map[num_player - 1][0] + 1)] = temp;

		temp = game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] - 1)];
		game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] - 1)] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0])];
		game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0])] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] + 1)];
		game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] + 1)] = temp;

		temp = game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] - 1)];
		game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] - 1)] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0])];
		game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0])] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] + 1)];
		game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] + 1)] = temp;

		game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0])] = 'v';
		game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] + 1)] = 'v';
		game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] - 1)] = 'v';

		players_position_on_map[num_player - 1][1]--;

		return true;

	case DOWN:

		temp = game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] - 1)];
		game_map[(players_position_on_map[num_player - 1][1] + 2)][(players_position_on_map[num_player - 1][0] - 1)] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0])];
		game_map[(players_position_on_map[num_player - 1][1] + 2)][(players_position_on_map[num_player - 1][0])] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] + 1)];
		game_map[(players_position_on_map[num_player - 1][1] + 2)][(players_position_on_map[num_player - 1][0] + 1)] = temp;

		temp = game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] - 1)];
		game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] - 1)] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0])];
		game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0])] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] + 1)];
		game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] + 1)] = temp;

		temp = game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] - 1)];
		game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] - 1)] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0])];
		game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0])] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] + 1)];
		game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] + 1)] = temp;

		game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] - 1)] = 'v';
		game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0])] = 'v';
		game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] + 1)] = 'v';

		players_position_on_map[num_player - 1][1]++;

		return true;

	case LEFT:

		temp = game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] - 1)];
		game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] - 2)] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] - 1)];
		game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] - 2)] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] - 1)];
		game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] - 2)] = temp;

		temp = game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0])];
		game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] - 1)] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0])];
		game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] - 1)] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0])];
		game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] - 1)] = temp;

		temp = game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] + 1)];
		game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0])] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] + 1)];
		game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0])] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] + 1)];
		game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0])] = temp;

		game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] + 1)] = 'v';
		game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0]) + 1] = 'v';
		game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] + 1)] = 'v';

		players_position_on_map[num_player - 1][0]--;
		return true;

	case RIGHT:		
		
		temp = game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] + 1)];
		game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] + 2)] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] + 1)];
		game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] + 2)] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] + 1)];
		game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] + 2)] = temp;

		temp = game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0])];
		game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] + 1)] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0])];
		game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] + 1)] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0])];
		game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] + 1)] = temp;

		temp = game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] - 1)];
		game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0])] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0] - 1)];
		game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0])] = temp;
		temp = game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] - 1)];
		game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0])] = temp;

		game_map[(players_position_on_map[num_player - 1][1] - 1)][(players_position_on_map[num_player - 1][0] - 1)] = 'v';
		game_map[(players_position_on_map[num_player - 1][1])][(players_position_on_map[num_player - 1][0]) - 1] = 'v';
		game_map[(players_position_on_map[num_player - 1][1] + 1)][(players_position_on_map[num_player - 1][0] - 1)] = 'v';

		players_position_on_map[num_player - 1][0]++;

		return true;
	default:
		break;
	}
	return false;
}


unsigned short int Game_Manager::quantity_game_managers = 0;
unsigned short int Game_Manager::quantity_player = 0;


//void glfwWindowSizeCallback(GLFWwindow* pWindow, int wight, int height) {
//	settings.set_x_window_size(wight);
//	settings.set_y_window_size(height);
//	glViewport(0, 0, settings.get_x_window_size(), settings.get_y_window_size());
//}
//
//void glfwKeyCallback(GLFWwindow* pWindow, int key, int scancode, int action, int mode) {
//	if (settings.is_there_a_key(key) && action == GLFW_PRESS) {
//		settings.change_key_state(key, true);
//	}
//	/*if (settings.is_there_a_key(key) && action == GLFW_RELEASE) {
//		settings.change_key_state(key, false);
//	}*/
//	if (settings.get_key_state(GLFW_KEY_ESCAPE)) {
//		glfwSetWindowShouldClose(pWindow, GL_TRUE);
//	}
//}