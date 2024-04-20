#include "game_objects.hpp"
#include <iostream>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/rotate_vector.hpp>




Model::Model(GLuint& vao, int quantity_points_primitiv, std::vector<glm::mat4> model_matrix,
	std::shared_ptr<Render::Shader_Program> pModel_Shader_Program)
{
	this->pModel_Shader_Program = pModel_Shader_Program;
	this->quantity_points_primitiv = quantity_points_primitiv;
	for (int i = 0; i < model_matrix.size(); i++) {
		this->model_matrix.push_back((model_matrix[i] * model_scaling));
	}

	model_matrix_location = glGetUniformLocation(this->pModel_Shader_Program->get_shader_program_ID(), "model_matrix");

	glBindVertexArray(vao);
	this->pModel_Shader_Program->use();
	glUniformMatrix4fv(model_matrix_location, 1, GL_FALSE, glm::value_ptr(model_matrix[0]));
}

void Model::draw(GLuint& vao)
{
	glBindVertexArray(vao);
	pModel_Shader_Program->use();
	for (int i = 0; i < model_matrix.size(); i++) {
		glUniformMatrix4fv(model_matrix_location, 1, GL_FALSE, glm::value_ptr(model_matrix[i]));
		glDrawElements(GL_TRIANGLES, quantity_points_primitiv, GL_UNSIGNED_INT, 0);
	}
}



void Model::set_new_model(std::vector<glm::mat4> new_model)
{
	for (int i = 0; i < model_matrix.size(); i++) {
		model_matrix[i] = new_model[i] * model_scaling;
	}
}

Model::~Model() {
	pModel_Shader_Program.~shared_ptr();
}

glm::mat4x4 Model::model_scaling = {
{0.25f,0.0f,0.0f,0.0f},
{0.0f,0.25f,0.0f,0.0f},
{0.0f,0.0f,1.0f,0.0f},
{0.0f,0.0f,0.0f,1.0f}
};




glm::mat4x4 for_rotate = {
	{1.77777778f,0.0f,0.0f,0.0f},
	{0.0f,0.5625f,0.0f,0.0f},
	{0.0f,0.0f,1.0f,0.0f},
	{0.0f,0.0f,0.0f,1.0f}
};


Player::Player(std::shared_ptr<Render::Shader_Program> pShader_program, float spawnpoint_x, float spawnpoint_y, GLuint& vao, std::string nickname)
	: model_player(vao, quantity_points_primitiv, model_matrix, pModel_Shader_Program),
	pModel_Shader_Program(pShader_program), nickname(nickname), alive(true)
{
	if (counter_players >= 4) {
		std::cerr << "Error: 5player" << std::endl;
		return;
	}
	counter_players++;
	if (counter_players == 1) {
		color[0] = 1.0f;
		color[1] = 0.0f;
		color[2] = 0.0f;
		player_direction = UP;
	}
	if (counter_players == 2) {
		color[0] = 0.0f;
		color[1] = 0.0f;
		color[2] = 1.0f;
		rotate(DOWN);
	}
	if (counter_players == 3) {
		color[0] = 0.0f;
		color[1] = 1.0f;
		color[2] = 0.0f;
		player_direction = UP;
	}
	if (counter_players == 4) {
		color[0] = 1.0f;
		color[1] = 0.0f;
		color[2] = 0.8f;
		rotate(DOWN);
	}


	position = glm::translate(glm::mat4(1.0f), glm::vec3(spawnpoint_x, spawnpoint_y, 0.0f));

	vertexColorLocation = glGetUniformLocation(pModel_Shader_Program->get_shader_program_ID(), "Color");
	scale_matrix_location = glGetUniformLocation(pModel_Shader_Program->get_shader_program_ID(), "scale_matrix");
	position_matrix_location = glGetUniformLocation(pModel_Shader_Program->get_shader_program_ID(), "position_matrix");

}

void Player::draw(GLuint& vao)
{
	pModel_Shader_Program->use();
	glUniform3f(vertexColorLocation, color[0], color[1], color[2]);
	glUniformMatrix4fv(scale_matrix_location, 1, GL_FALSE, glm::value_ptr(scale_player_model));
	glUniformMatrix4fv(position_matrix_location, 1, GL_FALSE, glm::value_ptr(position));
	model_player.draw(vao);
}



Player::~Player()
{
	counter_players--;
	pModel_Shader_Program.~shared_ptr();
	model_player.~Model();
}

unsigned int Player::counter_players = 0;

std::vector<glm::vec3> Player::model_primitivs = {
	glm::vec3(0.0f, 0.0f, 0.0f),
	glm::vec3(0.0f, 0.425f, 0.0f),
	glm::vec3(-0.239f, 0.0f, 0.0f),
	glm::vec3(0.239f, 0.0f, 0.0f),
	glm::vec3(-0.239f, -0.425f, 0.0f),
	glm::vec3(0.239f, -0.425f, 0.0f)
};

void Player::rotate(Model_Direction direction)
{
	for (int i = 0; i < model_matrix.size(); i++) {
		model_matrix[i] = glm::translate(glm::mat4(1.0f), model_primitivs[i]);
	}
	player_direction = UP;
	if (direction == LEFT) {
		glm::vec3 a;
		for (int i = 0; i < model_matrix.size(); i++) {
			a = glm::vec4(for_rotate * glm::vec4(model_primitivs[i], 1.0f));
			model_matrix[i] = glm::translate(glm::mat4(1.0f), glm::rotateZ(a, 1.57f));
		}
		player_direction = LEFT;
	};
	if (direction == RIGHT) {
		glm::vec3 a;
		for (int i = 0; i < model_matrix.size(); i++) {
			a = glm::vec4(for_rotate * glm::vec4(model_primitivs[i], 1.0f));
			model_matrix[i] = glm::translate(glm::mat4(1.0f), glm::rotateZ(a, 4.71f));
		}
		player_direction = RIGHT;
	};
	if (direction == DOWN) {
		for (int i = 0; i < model_matrix.size(); i++) {
			model_matrix[i] = glm::translate(glm::mat4(1.0f), glm::rotateZ(model_primitivs[i], 3.14f));
		}
		player_direction = DOWN;
	}
	model_player.set_new_model(model_matrix);
}