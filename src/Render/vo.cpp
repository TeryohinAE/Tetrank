#include "vo.hpp"

void init_VO(	GLuint& vao, GLuint& vbo, GLuint& ebo, std::shared_ptr<Render::Shader_Program> pCurrent_shader_program, 
				Primitiv type_primitiv, int& vertexColorLocation)
{
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	if (type_primitiv == PLAYER) {
		glBufferData(GL_ARRAY_BUFFER, sizeof(point_player_primitiv), point_player_primitiv, GL_STATIC_DRAW);
	}
	if (type_primitiv == WALL) {
		glBufferData(GL_ARRAY_BUFFER, sizeof(point_wall_primitiv), point_wall_primitiv, GL_STATIC_DRAW);
	}

	pCurrent_shader_program->use();
	if (type_primitiv == PLAYER) {
		glUniform3f(vertexColorLocation, color_player_primitiv[0], color_player_primitiv[1], color_player_primitiv[2]);
	}
	if (type_primitiv == WALL) {
		glUniform3f(vertexColorLocation, color_wall_primitiv[0], color_wall_primitiv[1], color_wall_primitiv[2]);
	}

	glGenBuffers(1, &ebo);

	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, nullptr);
	glEnableVertexAttribArray(0);

	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ebo);
	if (type_primitiv == PLAYER) {
		glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indeces_player_primitiv), indeces_player_primitiv, GL_STATIC_DRAW);
	}
	if (type_primitiv == WALL) {
		glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indeces_wall_primitiv), indeces_wall_primitiv, GL_STATIC_DRAW);
	}
}
