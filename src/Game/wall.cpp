#include "game_objects.hpp"
#include <glm/gtc/type_ptr.hpp>






Map::Map(std::vector<std::vector<char>>& map, GLuint& vao, std::shared_ptr<Render::Shader_Program> pShader_program) 
	: model(vao, quantity_points_primitiv, model_matrix, pShader_program)
{
	this->map = map;
	this->pShader_program = pShader_program;

	//We assume that the map is always rectangular
	float x_scale = 1.0f / this->map.size();
	float y_scale = 1.0f / this->map[0].size();
	float scale = x_scale;
	if (x_scale > y_scale) {
		scale = y_scale;
	}
	scale = scale * 4;
	scale_model = {
		{scale, 0.0f, 0.0f, 0.0f},
		{0.0f, scale, 0.0f, 0.0f},
		{0.0f, 0.0f, 1.0f, 0.0f},
		{0.0f, 0.0f, 0.0f, 1.0f}
	};

	model_matrix.clear();
	unsigned int quantity_p = 0;
	for (int i = 0; i < this->map.size(); i++)
	{
		for (int j = 0; j < this->map[i].size(); j++)
		{
			if (this->map[i][j] == 'w') {
				quantity_primitivs++;
				if (i < ((this->map.size() / 2)) && j < ((this->map[i].size() / 2))) {
					model_matrix.push_back(glm::translate(glm::mat4(1.0f),
						glm::vec3(((((0.95 / (this->map[i].size() / 2)) * ((this->map[i].size() / 2) - j)) / 1.77777778) * (-1)),
							((0.95 / (this->map.size() / 2)) * ((this->map.size() / 2) - i)), 0.0f)));
				}
				else if (i < ((this->map.size() / 2)) && j == ((this->map[i].size() / 2))) {
					model_matrix.push_back(glm::translate(glm::mat4(1.0f),
						glm::vec3(0.0f, ((0.95 / (this->map.size() / 2)) * ((this->map.size() / 2) - i)), 0.0f)));
				}
				else if (i < ((this->map.size() / 2)) && j >((this->map[i].size() / 2))) {
					model_matrix.push_back(glm::translate(glm::mat4(1.0f),
						glm::vec3((((0.95 / (this->map[i].size() / 2)) * (j - (this->map[i].size() / 2))) / 1.77777778),
							((0.95 / (this->map.size() / 2)) * ((this->map.size() / 2) - i)), 0.0f)));
				}


				else if (i == ((this->map.size() / 2)) && j < ((this->map[i].size() / 2))) {
					model_matrix.push_back(glm::translate(glm::mat4(1.0f),
						glm::vec3(((((0.95 / (this->map[i].size() / 2)) * ((this->map[i].size() / 2) - j)) / 1.77777778) * (-1)), 0.0f, 0.0f)));
				}
				else if (i == ((this->map.size() / 2)) && j == ((this->map[i].size() / 2))) {
					model_matrix.push_back(glm::translate(glm::mat4(1.0f),
						glm::vec3(0.0f, 0.0f, 0.0f)));
				}
				else if (i == ((this->map.size() / 2)) && j > ((this->map[i].size() / 2))) {
					model_matrix.push_back(glm::translate(glm::mat4(1.0f),
						glm::vec3(((0.95 / (this->map[i].size() / 2)) * (j - (this->map[i].size() / 2)) / 1.77777778), 0.0f, 0.0f)));
				}


				else if (i > ((this->map.size() / 2)) && j < ((this->map[i].size() / 2))) {
					model_matrix.push_back(glm::translate(glm::mat4(1.0f),
						glm::vec3(((((0.95 / (this->map[i].size() / 2)) * ((this->map[i].size() / 2) - j)) / 1.77777778) * (-1)),
							(((0.95 / (this->map.size() / 2)) * (i - (this->map.size() / 2))) * (-1)), 0.0f)));
				}
				else if (i > ((this->map.size() / 2)) && j == ((this->map[i].size() / 2))) {
					model_matrix.push_back(glm::translate(glm::mat4(1.0f),
						glm::vec3(0.0f, (((0.95 / (this->map.size() / 2)) * (i - (this->map.size() / 2))) * (-1)), 0.0f)));
				}
				else if (i > ((this->map.size() / 2)) && j >((this->map[i].size() / 2))) {
					model_matrix.push_back(glm::translate(glm::mat4(1.0f),
						glm::vec3((((0.95 / (this->map[i].size() / 2)) * (j - (this->map[i].size() / 2))) / 1.77777778),
							(((0.95 / (this->map.size() / 2)) * (i - (this->map.size() / 2))) * (-1)), 0.0f)));
				}
			}
			else if (this->map[i][j] == 'p' && quantity_p == 0) {
				quantity_p++;

				spawn_player2[0] = (((0.95 / (this->map[i].size() / 2)) * ((this->map[i].size() / 2) - (j + 1))) / 1.77777778) * (-1);
				spawn_player2[1] = (0.95 / (this->map.size() / 2)) * ((this->map.size() / 2) - (i + 1));
				spawn_player1[0] = spawn_player2[0];
				spawn_player1[1] = spawn_player2[1] * (-1);
				spawn_player3[0] = spawn_player2[0] * (-1);
				spawn_player3[1] = spawn_player2[1] * (-1);
				spawn_player4[0] = spawn_player2[0] * (-1);
				spawn_player4[1] = spawn_player2[1];
			}
		}
	}

	vertexColorLocation = glGetUniformLocation(pShader_program->get_shader_program_ID(), "Color");
	scale_matrix_location = glGetUniformLocation(pShader_program->get_shader_program_ID(), "scale_matrix");
	position_matrix_location = glGetUniformLocation(pShader_program->get_shader_program_ID(), "position_matrix");
}

std::vector<std::vector<char>> Map::get_map()
{
	return map;
}

glm::mat4x4 Map::get_scale_models()
{
	return scale_model;
}

float Map::get_player_spawnpoint(int num_player, char x_or_y)
{
	switch (num_player)
	{
	case 1:
		if (x_or_y == 'x')
			return spawn_player1[0];
		else if (x_or_y == 'y')
			return spawn_player1[1];
		else
			return -1;
	case 2:
		if (x_or_y == 'x')
			return spawn_player2[0];
		else if (x_or_y == 'y')
			return spawn_player2[1];
		else
			return -1;
	case 3:
		if (x_or_y == 'x')
			return spawn_player3[0];
		else if (x_or_y == 'y')
			return spawn_player3[1];
		else
			return -1;
	case 4:
		if (x_or_y == 'x')
			return spawn_player4[0];
		else if (x_or_y == 'y')
			return spawn_player4[1];
		else
			return -1;
	default:
		return -1;
	}
}


void Map::draw(GLuint& vao)
{
	pShader_program->use();
	glUniform3f(vertexColorLocation, color[0], color[1], color[2]);
	glUniformMatrix4fv(scale_matrix_location, 1, GL_FALSE, glm::value_ptr(scale_model));
	for (int i = 0; i < model_matrix.size(); i++) {
		glUniformMatrix4fv(position_matrix_location, 1, GL_FALSE, glm::value_ptr(model_matrix[i]));
		model.draw(vao);
	}
}

Map::~Map()
{
	model.~Model();
	pShader_program.~shared_ptr();
}

GLfloat Map::color[] = { 0.0f, 0.0f, 0.0f };