#pragma once
#include "game_objects.hpp"
#include <memory>
#include <glm/mat4x4.hpp>

enum Model_Direction;
class Model;

class Bullet final {
public:
	Bullet() = delete;
	Bullet(Bullet&) = delete;
	Bullet& operator = (const Bullet&) = delete;
	Bullet& operator = (Bullet&& Bullet) noexcept = delete;
	Bullet(Bullet&& Bullet) noexcept = delete;

	Bullet(std::shared_ptr<Render::Shader_Program> pShader_program, float spawnpoint_x, float spawnpoint_y, 
		GLfloat color_red, GLfloat color_green, GLfloat color_blue,
		glm::mat4x4 scale, Model_Direction direction, GLuint& vao, int x_on_map, int y_on_map);

public:
	void draw(GLuint& vao);
	Model_Direction bullet_direction();
	void set_position_on_map(char x_or_y, int value);
	int get_position_on_map(char x_or_y);

private:
	void move();
	std::shared_ptr<Model> model_bullet;
	float speed = 24;
	glm::mat4 position = glm::mat4(1.0);
	glm::mat4x4 scale_bullet_model = {
	{0.5f,0.0f,0.0f,0.0f},
	{0.0f,0.5f,0.0f,0.0f},
	{0.0f,0.0f,1.0f,0.0f},
	{0.0f,0.0f,0.0f,1.0f}
	};
	Model_Direction direction;
	const int quantity_points_primitiv = 24;
	std::shared_ptr<Render::Shader_Program> pModel_Shader_Program;
	GLfloat color[3];

	GLint vertexColorLocation;
	GLint scale_matrix_location;
	GLint position_matrix_location;

	int x_on_map, y_on_map;

};