#include "game_manager.hpp"











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





Game_Manager::Game_Manager(std::shared_ptr<Render::Shader_Program> pDefault_shader, GLuint& vao_map) : p_shader(pDefault_shader)
{
	if (quantity_game_managers == 0) {
		add_map(vao_map, default_map, "default");
	}
	quantity_game_managers++;
	current_map = map_of_map["default"];
}

void Game_Manager::keycap_register(GLFWwindow* pWindow, int key, int scancode, int action, int mode)
{

}

bool Game_Manager::add_player(GLuint& vao, std::string nickname) 
{
	if (quantity_player == 4) {
		return false;
	}
	quantity_player++;
	player_map.emplace(quantity_player, std::make_shared<Player>(p_shader, current_map->get_player_spawnpoint(quantity_player, 'x'),
		current_map->get_player_spawnpoint(quantity_player, 'y'), vao, nickname, current_map->get_scale_models())).first->second;
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

void Game_Manager::draw_objects(GLuint& vao_player, GLuint& vao_wall) 
{
	if (quantity_player != 4) {
		return;
	}
	std::shared_ptr<Player> player;
	current_map->draw(vao_wall);
	player = player_map[1];
	player->draw(vao_player);
	player = player_map[2];
	player->draw(vao_player);
	player = player_map[3];
	player->draw(vao_player);
	player = player_map[4];
	player->draw(vao_player);
}

Game_Manager::~Game_Manager()
{
	player_map.clear();
	map_of_map.clear();
}


unsigned short int Game_Manager::quantity_game_managers = 0;
unsigned short int Game_Manager::quantity_player = 0;