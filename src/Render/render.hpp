#pragma once
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "shader_program.hpp"
#include "vo.hpp"

enum Primitiv;

namespace Render {
	void update_screen(	GLFWwindow* pWindow, std::shared_ptr<Render::Shader_Program> shader_program, GLuint& vao, int limit_frame,
						Primitiv primitiv_type, int& vertexColorLocation);
	class Shader_Program;
}