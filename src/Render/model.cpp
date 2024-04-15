#include "model.hpp"
#include <glm/gtc/type_ptr.hpp>

Model::Model(	GLuint& vao, int quantity_points_primitiv, glm::mat4 model_matrix[], int quantity_primitivs,
				std::shared_ptr<Render::Shader_Program> pModel_Shader_Program)
{
	this->pModel_Shader_Program = pModel_Shader_Program;
	this->quantity_points_primitiv = quantity_points_primitiv;
	this->quantity_primitivs = quantity_primitivs;
	for (int i = 0; i < quantity_primitivs; i++) {
		this->model_matrix.push_back(model_matrix[i]);
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
	for (int i = 0; i < quantity_primitivs; i++) {
		glUniformMatrix4fv(model_matrix_location, 1, GL_FALSE, glm::value_ptr(model_matrix[i]));
		glDrawElements(GL_TRIANGLES, quantity_points_primitiv, GL_UNSIGNED_INT, 0);
	}
}

void Model::set_move_model(float move_x, float move_y)
{
}

void Model::set_model_direction(Model_Direction move_direction)
{
}

glm::mat4 scale_model(glm::vec3 a)
{
	return(glm::translate(matrix_indentity, a) * model_scaling);
}
