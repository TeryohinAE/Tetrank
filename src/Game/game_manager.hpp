#pragma once
#include "game_objects.hpp"
#include <map>

class Player;
class Map;


class Game_Manager final {
public:
	Game_Manager() = delete;

	Game_Manager(const Game_Manager&) = delete;
	Game_Manager& operator=(const Game_Manager&) = delete;
	Game_Manager& operator=(Game_Manager&) = delete;
	Game_Manager(Game_Manager&&) = delete;

	Game_Manager(std::shared_ptr<Render::Shader_Program> pDefault_shader, GLuint& vao_map);

public:
	void keycap_register(GLFWwindow* pWindow, int key, int scancode, int action, int mode);

	bool add_player(GLuint& vao, std::string nickname);
	void add_map(GLuint& vao, std::vector<std::vector<char>> map, std::string name_map);
	bool select_map(std::string name_map);

	void draw_objects(GLuint& vao_player, GLuint& vao_wall);

private:
	static unsigned short int quantity_game_managers;

	typedef std::map<const int, std::shared_ptr<Player>> Player_map;
	Player_map player_map;
	typedef std::map<const std::string, std::shared_ptr<Map>> Map_of_map;
	Map_of_map map_of_map;

	std::shared_ptr<Render::Shader_Program> p_shader;
	static unsigned short int quantity_player;
	std::shared_ptr<Map> current_map;

public:
	~Game_Manager();
};