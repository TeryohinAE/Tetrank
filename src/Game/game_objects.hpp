#pragma once
#include <glad/glad.h>
#include <vector>
#include <string>
#include <memory>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <memory>
#include "render.hpp"
enum Model_Direction { UP, DOWN, LEFT, RIGHT };


static glm::mat4 matrix_indentity = glm::mat4(1.0f);


class Model final {
public:
	Model() = delete;
	Model(Model&) = delete;
	Model& operator = (const Model&) = delete;
	Model& operator = (Model&& Model) noexcept = delete;
	Model(Model&& Model) noexcept = delete;

	Model(GLuint& vao, int quantity_points_primitiv, std::vector<glm::mat4> model_matrix,
		std::shared_ptr<Render::Shader_Program> pModel_Shader_Program);

public:
	void draw(GLuint& vao);
	void set_new_model(std::vector<glm::mat4> new_model);

private:
	std::shared_ptr<Render::Shader_Program> pModel_Shader_Program;
	int quantity_points_primitiv;
	int quantity_primitivs;
	std::vector<glm::mat4> model_matrix;

	int model_matrix_location;

	static glm::mat4x4 model_scaling;

public:
	~Model();
};







class Player final{
public:
	Player() = delete;
	Player(Player&) = delete;
	Player& operator = (const Player&) = delete;
	Player& operator = (Player&& Player) noexcept = delete;
	Player(Player&& Player) noexcept = delete;

	Player(std::shared_ptr<Render::Shader_Program> pShader_program, float spawnpoint_x, float spawnpoint_y, GLuint& vao, std::string nickname,
		glm::mat4x4 scale, Model_Direction direction);

public:
	void draw(GLuint& vao);
	GLfloat get_red();
	GLfloat get_green();
	GLfloat get_blue();
	bool is_alive();
	void set_alive();
	std::string get_nickname();

	void move(Model_Direction direction);
	void shoot();

private:
	static unsigned int counter_players;

	int vertexColorLocation;
	int scale_matrix_location;
	int position_matrix_location;

	static std::vector<glm::vec3> model_primitivs;
	std::vector<glm::mat4> model_matrix = {
	glm::translate(glm::mat4(1.0f), model_primitivs[0]),
	glm::translate(glm::mat4(1.0f), model_primitivs[1]),
	glm::translate(glm::mat4(1.0f), model_primitivs[2]),
	glm::translate(glm::mat4(1.0f), model_primitivs[3]),
	glm::translate(glm::mat4(1.0f), model_primitivs[4]),
	glm::translate(glm::mat4(1.0f), model_primitivs[5])
	};
	double speed = 12;
	GLfloat color[3];
	std::shared_ptr<Render::Shader_Program> pModel_Shader_Program;
	const int quantity_points_primitiv = 24;

	Model model_player;
	//Model bullet;

	glm::mat4 position;
	glm::mat4x4 scale_player_model = {
	{0.5f,0.0f,0.0f,0.0f},
	{0.0f,0.5f,0.0f,0.0f},
	{0.0f,0.0f,1.0f,0.0f},
	{0.0f,0.0f,0.0f,1.0f}
	};

	std::string nickname;
	Model_Direction player_direction;
	bool alive = false;

	void rotate(Model_Direction direction);

public:
	~Player();
};







class Map final{
public:
	Map() = delete;
	Map(Map&) = delete;
	Map& operator = (const Map&) = delete;
	Map& operator = (Map&& Map) noexcept = delete;
	Map(Map&& Map) noexcept = delete;

	Map(std::vector<std::vector<char>> &map, GLuint &vao, std::shared_ptr<Render::Shader_Program> pShader_program);

public:
	int get_spawn_players_in_game_matrix(int num_player, char x_or_y);
	std::vector<std::vector<char>> get_map();
	Model_Direction get_spawn_direction(int num_player);
	glm::mat4x4 get_scale_models();
	float get_player_spawnpoint(int num_player, char x_or_y);
	void draw(GLuint& vao);

private:
	std::vector<std::vector<char>> map;
	glm::mat4x4 scale_model;
	std::vector<glm::mat4> model_matrix{glm::mat4(1.0f)};
	unsigned int quantity_primitivs = 0;
	int spawn_player1_in_game_matrix[2];
	int spawn_player2_in_game_matrix[2];
	int spawn_player3_in_game_matrix[2];
	int spawn_player4_in_game_matrix[2];
	float spawn_player1[2];
	float spawn_player2[2];
	float spawn_player3[2];
	float spawn_player4[2];
	Model_Direction direction_player1, direction_player2, direction_player3, direction_player4;
	const int quantity_points_primitiv = 24;
	static GLfloat color[3];
	std::shared_ptr<Render::Shader_Program> pShader_program;

	Model model;

	int vertexColorLocation;
	int scale_matrix_location;
	int position_matrix_location;

public:
	~Map();
};