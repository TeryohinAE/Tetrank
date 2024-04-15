#pragma once
#include <glad/glad.h>
#include <glm/mat4x4.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <memory>
#include <vector>
#include "render.hpp"

enum Model_Direction { UP, DOWN, LEFT, RIGHT };


static glm::mat4 matrix_indentity = glm::mat4(1.0f);
static glm::mat4x4 model_scaling = {
	{0.25f,0.0f,0.0f,0.0f},
	{0.0f,0.25f,0.0f,0.0f},
	{0.0f,0.0f,1.0f,0.0f},
	{0.0f,0.0f,0.0f,1.0f}
};
glm::mat4 scale_model(glm::vec3 a);
static glm::mat4 player_matrix[]{
	scale_model(glm::vec3(0.0f, 0.0f, 0.0f)),
	scale_model(glm::vec3(0.0f, 0.425f, 0.0f)),
	scale_model(glm::vec3(-0.239f, 0.0f, 0.0f)),
	scale_model(glm::vec3(0.239f, 0.0f, 0.0f)),
	scale_model(glm::vec3(-0.239f, -0.425f, 0.0f)),
	scale_model(glm::vec3(0.239f, -0.425f, 0.0f))
};

class Model final {
public:
	Model() = delete;
	Model(Model&) = delete;
	Model& operator = (const Model&) = delete;
	Model& operator = (Model&& Model) noexcept = delete;
	Model(Model&& Model) noexcept = delete;

	Model(	GLuint& vao, int quantity_points_primitiv, glm::mat4 model_matrix[], int quantity_primitivs,
			std::shared_ptr<Render::Shader_Program> pModel_Shader_Program);

public:
	void draw(GLuint& vao);
	void set_move_model(float move_x, float move_y);
	void set_model_direction(Model_Direction move_direction);

private:
	std::shared_ptr<Render::Shader_Program> pModel_Shader_Program;
	int quantity_points_primitiv;
	int quantity_primitivs;
	std::vector<glm::mat4> model_matrix;

	int model_matrix_location;

public:
	~Model() = default;
};