#include "game_objects.hpp"
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <vector>
#include <glad/glad.h>
#include <iostream>


Bullet::Bullet(std::shared_ptr<Render::Shader_Program> pShader_program, float spawnpoint_x, float spawnpoint_y, 
	GLfloat color_red, GLfloat color_green, GLfloat color_blue, 
	glm::mat4x4 scale, Model_Direction direction, GLuint& vao, int x_on_map, int y_on_map) : pModel_Shader_Program(pShader_program)
{
	position = glm::translate(glm::mat4(1.0), glm::vec3(spawnpoint_x, spawnpoint_y, 0.0));
	this->direction = direction;
	color[0] = color_red;
	color[1] = color_green;
	color[2] = color_blue;
	scale_bullet_model = scale;

	vertexColorLocation = glGetUniformLocation(pModel_Shader_Program->get_shader_program_ID(), "Color");
	scale_matrix_location = glGetUniformLocation(pModel_Shader_Program->get_shader_program_ID(), "scale_matrix");
	position_matrix_location = glGetUniformLocation(pModel_Shader_Program->get_shader_program_ID(), "position_matrix");

	std::vector<glm::mat4> model_matrix = { {glm::translate(glm::mat4(1.0), glm::vec3(0.0f, 0.0f, 0.0f))} };
	model_bullet = std::make_shared<Model>(vao, quantity_points_primitiv, model_matrix, pModel_Shader_Program);

	this->x_on_map = x_on_map;
	this->y_on_map = y_on_map;
}

void Bullet::draw(GLuint& vao)
{
	pModel_Shader_Program->use();
	glUniform3f(vertexColorLocation, color[0], color[1], color[2]);
	glUniformMatrix4fv(scale_matrix_location, 1, GL_FALSE, glm::value_ptr(scale_bullet_model));
	glUniformMatrix4fv(position_matrix_location, 1, GL_FALSE, glm::value_ptr(position));
	model_bullet->draw(vao);
	move();
}

Model_Direction Bullet::bullet_direction()
{
	return direction;
}

void Bullet::set_position_on_map(char x_or_y, int value)
{
	if (x_or_y == 'x') {
		x_on_map = value;
	}
	else if (x_or_y == 'y') {
		y_on_map = value;
	}
	return;
}

int Bullet::get_position_on_map(char x_or_y)
{
	if (x_or_y == 'x') {
		return x_on_map;
	}
	else if (x_or_y == 'y') {
		return y_on_map;
	}
	return -1;
}

void Bullet::move()
{
	switch (direction)
	{
	case UP:
		position = glm::mat4(glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, (speed * scale_bullet_model[1][1] * 0.00708333333f * 1.17), 0.0f))) * position;
		break;
	case DOWN:
		position = glm::mat4(glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, (speed * scale_bullet_model[1][1] * -0.00708333333f * 1.17), 0.0f))) * position;
		break;
	case LEFT:
		position = glm::mat4(glm::translate(glm::mat4(1.0f), glm::vec3((speed * scale_bullet_model[0][0] * -0.00398333333f * 1.17), 0.0f, 0.0f))) * position;
		break;
	case RIGHT:
		position = glm::mat4(glm::translate(glm::mat4(1.0f), glm::vec3((speed * scale_bullet_model[0][0] * 0.00398333333f * 1.17), 0.0f, 0.0f))) * position;
		break;
	default:
		break;
	}
}

//Bullet::~Bullet()
//{
//	pModel_Shader_Program.~shared_ptr();
//	model_bullet.~shared_ptr();
//}
