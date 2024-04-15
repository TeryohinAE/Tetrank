#pragma once
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "shader_program.hpp"
#include "vo.hpp"
#include "model.hpp"


enum Primitiv;
enum Model_Direction;

class Model;
namespace Render {
	void update_screen(	GLFWwindow* pWindow, std::shared_ptr<Render::Shader_Program> shader_program, GLuint& vao, int limit_frame,
						Primitiv primitiv_type, int& vertexColorLocation, Model& model);
	class Shader_Program;
}

void init_VO(	GLuint& vao, GLuint& vbo, GLuint& ebo, std::shared_ptr<Render::Shader_Program> pCurrent_shader_program,
				Primitiv type_primitiv, int& vertexColorLocation);


