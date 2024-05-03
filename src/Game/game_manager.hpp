#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "game_objects.hpp"
#include "text.hpp"
#include <map>
#include <chrono>
#include "settings.hpp"
////функци€ дл€ программного пользовательского изменени€ размера окна
//void glfwWindowSizeCallback(GLFWwindow* pWindow, int wight, int height);
//
////функци€ дл€ улавливани€ клавиши эскейп и отдаЄт команду закрыть окно
//void glfwKeyCallback(GLFWwindow* pWindow, int key, int scancode, int action, int mode);
//

namespace Render{
	class Shader_Program;
}
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
	void game_tick();

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
	std::vector<std::vector<char>> game_map;
	glm::mat4 game_area_pos = glm::translate(glm::mat4(1.0), glm::vec3(-0.25, 0.0, 0.0));

	float x_text_position = 0.625;
	float y_text_position = 0.777777778;
	float x_text_step_position = 0.0405;
	float y_text_step_position = 0.12;
	std::string rus_alphabet = "јаЅб¬в√гƒд≈е®Є∆ж«з»и…й кЋлћмЌнќоѕп–р—с“т”у‘ф’х÷ц„чЎшўщЏъџы№ьЁэёюя€Ч";
	std::shared_ptr<Text_to_matrix> text_to_matrix = std::make_shared<Text_to_matrix>(rus_alphabet);

	int global_position_location;

	std::vector<std::vector<int>> players_control_key;
	int pause;
	std::chrono::steady_clock::time_point update_game_matrix;

public:
	~Game_Manager();
};


static Settings settings;
