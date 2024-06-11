#pragma once
#include "game_objects.hpp"
#include <map>
class Model;
typedef std::map<char, std::vector<glm::mat4>> Alphabet;



class Text_to_matrix {
public:
	Text_to_matrix(std::string rus_alphabet);
	std::vector<glm::mat4> convert(std::string text);
private:
	Alphabet alphabet;
};



class Text final {
public:
	Text() = delete;
	Text(Text&) = delete;
	Text& operator = (const Text&) = delete;
	Text& operator = (Text&& Text) noexcept = delete;
	Text(Text&& Text) noexcept = delete;

	Text(	std::string text, GLfloat red_color, GLfloat green_color, GLfloat blue_color, GLuint& vao, 
			std::shared_ptr<Render::Shader_Program> p_shader, std::string rus_alphabet, glm::mat4 position);

public:
	void set_new_text(std::string new_text, std::string rus_alphabet);
	void draw(GLuint&vao);

private:
	GLfloat color[3];
	std::string text;
	glm::mat4 position = glm::mat4(1.0f);

	int vertexColorLocation;
	int scale_matrix_location;
	int position_matrix_location;

	std::vector<glm::mat4> model_matrix{glm::mat4(1.0f)};
	std::vector<glm::vec3> model_primitivs;

	std::shared_ptr<Render::Shader_Program> p_shader;
	std::shared_ptr<Text_to_matrix> text_to_matrix;
	const int quantity_points_primitiv = 6;

	std::shared_ptr<Model> model_text;

	const glm::mat4x4 scale_text_model = {
		{0.03f,0.0f,0.0f,0.0f},
		{0.0f,0.03f,0.0f,0.0f},
		{0.0f,0.0f,1.0f,0.0f},
		{0.0f,0.0f,0.0f,1.0f}
	};



public:
	~Text() = default;
};