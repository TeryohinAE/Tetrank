#pragma once
#include "game_objects.hpp"
#include "text.hpp"
#include <map>

class Player;
class Map;
class Text_to_matrix;
class Text;


class Game_Manager final {
public:
	Game_Manager() = delete;

	Game_Manager(const Game_Manager&) = delete;
	Game_Manager& operator=(const Game_Manager&) = delete;
	Game_Manager& operator=(Game_Manager&) = delete;
	Game_Manager(Game_Manager&&) = delete;

	Game_Manager(std::shared_ptr<Render::Shader_Program> pDefault_shader, GLuint& vao_map, GLuint& vao_text);

public:
	void keycap_register(GLFWwindow* pWindow, int key, int scancode, int action, int mode);

	bool add_player(GLuint& vao, std::string nickname, GLuint& vao_texxt);
	void add_map(GLuint& vao, std::vector<std::vector<char>> map, std::string name_map);
	bool select_map(std::string name_map);

	void draw_objects(GLuint& vao_player, GLuint& vao_wall, GLuint& vao_text);

private:
	static unsigned short int quantity_game_managers;

	typedef std::map<const int, std::shared_ptr<Player>> Player_map;
	Player_map player_map;
	typedef std::map<const std::string, std::shared_ptr<Text>> Text_map;
	Text_map text_map;
	typedef std::map<const std::string, std::shared_ptr<Map>> Map_of_map;
	Map_of_map map_of_map;
	typedef std::map<const std::string, int> Score_map;
	Score_map score_map;


	std::shared_ptr<Render::Shader_Program> p_shader;
	static unsigned short int quantity_player;
	std::shared_ptr<Map> current_map;
	glm::mat4 game_area_pos = glm::translate(glm::mat4(1.0), glm::vec3(-0.25, 0.0, 0.0));

	float x_text_position = 0.625;
	float y_text_position = 0.777777778;
	float x_text_step_position = 0.0405;
	float y_text_step_position = 0.12;
	std::string rus_alphabet = "ÀàÁáÂâÃãÄäÅå¨¸ÆæÇçÈèÉéÊêËëÌìÍíÎîÏïĞğÑñÒòÓóÔôÕõÖö×÷ØøÙùÚúÛûÜüİıŞşßÿ—";
	std::shared_ptr<Text_to_matrix> text_to_matrix = std::make_shared<Text_to_matrix>(rus_alphabet);

	int global_position_location;

public:
	~Game_Manager();
};