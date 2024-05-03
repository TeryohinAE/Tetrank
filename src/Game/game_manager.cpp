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





Game_Manager::Game_Manager(std::shared_ptr<Render::Shader_Program> pDefault_shader, GLuint& vao_map, GLuint& vao_text)
	: p_shader(pDefault_shader)
{
	if (quantity_game_managers == 0) {
		add_map(vao_map, default_map, "default");
	}
	quantity_game_managers++;
	current_map = map_of_map["default"];

	text_map.emplace("Score", std::make_shared<Text>("Ñ÷¸ò", 0.0f, 0.0f, 0.0f, vao_text, p_shader, text_to_matrix, 
		glm::mat4(glm::translate(glm::mat4(1.0f), glm::vec3(x_text_position, y_text_position, 0.0))))).first->second;

	global_position_location = glGetUniformLocation(p_shader->get_shader_program_ID(), "global_position");
	players_control_key = settings.get_players_control_key();
	update_game_matrix = std::chrono::steady_clock::now();
}

void Game_Manager::game_tick()
{
	std::chrono::milliseconds frame_time((1000 / 240));
	auto last_frame = std::chrono::high_resolution_clock::now();
	int i = 0;

	while (true)
	{
		last_frame = std::chrono::high_resolution_clock::now();
		i++;

		if (settings.get_key_state(players_control_key[0][0])) { player_map[1]->move(UP); }
		else if (settings.get_key_state(players_control_key[0][1])) { player_map[1]->move(DOWN); }
		else if (settings.get_key_state(players_control_key[0][2])) { player_map[1]->move(LEFT); }
		else if (settings.get_key_state(players_control_key[0][3])) { player_map[1]->move(RIGHT); }
		if (settings.get_key_state(players_control_key[0][4])) {}

		if (settings.get_key_state(players_control_key[1][0])) { player_map[2]->move(UP); }
		else if (settings.get_key_state(players_control_key[1][1])) { player_map[2]->move(DOWN); }
		else if (settings.get_key_state(players_control_key[1][2])) { player_map[2]->move(LEFT); }
		else if (settings.get_key_state(players_control_key[1][3])) { player_map[2]->move(RIGHT); }
		if (settings.get_key_state(players_control_key[1][4])) {}

		if (settings.get_key_state(players_control_key[2][0])) { player_map[3]->move(UP); }
		else if (settings.get_key_state(players_control_key[2][1])) { player_map[3]->move(DOWN); }
		else if (settings.get_key_state(players_control_key[2][2])) { player_map[3]->move(LEFT); }
		else if (settings.get_key_state(players_control_key[2][3])) { player_map[3]->move(RIGHT); }
		if (settings.get_key_state(players_control_key[2][4])) {}

		if (settings.get_key_state(players_control_key[3][0])) { player_map[4]->move(UP); }
		else if (settings.get_key_state(players_control_key[3][1])) { player_map[4]->move(DOWN); }
		else if (settings.get_key_state(players_control_key[3][2])) { player_map[4]->move(LEFT); }
		else if (settings.get_key_state(players_control_key[3][3])) { player_map[4]->move(RIGHT); }
		if (settings.get_key_state(players_control_key[3][4])) {}


		if ((update_game_matrix - std::chrono::steady_clock::now()) > std::chrono::milliseconds(30000)) {

		}
		auto end_frame = std::chrono::high_resolution_clock::now();
		if ((end_frame - last_frame) <= frame_time) {
			std::this_thread::sleep_for((frame_time - (end_frame - last_frame)) / 2);
		}
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
		return true;
	}
	else {
		return false;
	}
}

void Game_Manager::draw_objects(GLuint& vao_player, GLuint& vao_wall, GLuint& vao_text) 
{
	if (quantity_player != 4) {
		return;
	}
	p_shader->use();
	glUniformMatrix4fv(global_position_location, 1, GL_FALSE, glm::value_ptr(game_area_pos));
	current_map->draw(vao_wall);
	player_map[1]->draw(vao_player);
	player_map[2]->draw(vao_player);
	player_map[3]->draw(vao_player);
	player_map[4]->draw(vao_player);
	glUniformMatrix4fv(global_position_location, 1, GL_FALSE, glm::value_ptr(glm::mat4(1.0)));
	text_map["Score"]->draw(vao_text);
	text_map[std::to_string(1)]->draw(vao_text);
	text_map[std::to_string(2)]->draw(vao_text);
	text_map[std::to_string(3)]->draw(vao_text);
	text_map[std::to_string(4)]->draw(vao_text);
}

Game_Manager::~Game_Manager()
{
	quantity_game_managers--;
	quantity_player = 0;
	player_map.clear();
	map_of_map.clear();
	text_map.clear();
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