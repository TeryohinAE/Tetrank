#include "game_manager.hpp"
#include <glm/gtc/type_ptr.hpp>











std::vector<std::vector<char>> default_map = {
	{'w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','w','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','w','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','v','p','p','p','v','v','v','v','v','v','w','v','v','v','v','v','p','p','p','v','v','w'},
	{'w','v','p','p','p','v','v','v','v','v','v','w','v','v','v','v','v','p','p','p','v','v','w'},
	{'w','v','p','p','p','v','v','v','v','v','v','w','v','v','v','v','v','p','p','p','v','v','w'},
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
	{'w','v','p','p','p','v','v','v','v','v','v','w','v','v','v','v','v','p','p','p','v','v','w'},
	{'w','v','p','p','p','v','v','v','v','v','v','w','v','v','v','v','v','p','p','p','v','v','w'},
	{'w','v','p','p','p','v','v','v','v','v','v','w','v','v','v','v','v','p','p','p','v','v','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','w','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','v','v','v','v','v','v','v','v','v','v','w','v','v','v','v','v','v','v','v','v','v','w'},
	{'w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w'}
};





Game_Manager::Game_Manager(std::shared_ptr<Render::Shader_Program> pDefault_shader, GLuint& vao_map, GLuint& vao_text) : p_shader(pDefault_shader)
{
	if (quantity_game_managers == 0) {
		add_map(vao_map, default_map, "default");
	}
	quantity_game_managers++;
	current_map = map_of_map["default"];

	text_map.emplace("Score", std::make_shared<Text>("Ñ÷¸ò", 0.0f, 0.0f, 0.0f, vao_text, p_shader, text_to_matrix, 
		glm::mat4(glm::translate(glm::mat4(1.0f), glm::vec3(x_text_position, y_text_position, 0.0)))));

	global_position_location = glGetUniformLocation(p_shader->get_shader_program_ID(), "global_position");
}

void Game_Manager::keycap_register(GLFWwindow* pWindow, int key, int scancode, int action, int mode)
{

}

bool Game_Manager::add_player(GLuint& vao_player, std::string nickname, GLuint& vao_text) 
{
	if (quantity_player == 4) {
		return false;
	}
	quantity_player++;

	player_map.emplace(quantity_player, std::make_shared<Player>(p_shader, current_map->get_player_spawnpoint(quantity_player, 'x'),
		current_map->get_player_spawnpoint(quantity_player, 'y'), vao_player, nickname, current_map->get_scale_models())).first->second;

	score_map.emplace(nickname, 0);

	text_map.emplace(std::to_string(quantity_player), std::make_shared<Text>(nickname+" — "+std::to_string(score_map[nickname]), 
		player_map[quantity_player]->get_green(), player_map[quantity_player]->get_blue(), player_map[quantity_player]->get_red(), 
		vao_text, p_shader, text_to_matrix, glm::mat4(glm::translate(glm::mat4(1.0f), 
			glm::vec3(x_text_position, (y_text_position - (y_text_step_position * (quantity_player + 1))), 0.0)))));

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