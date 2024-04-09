#pragma once
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "shader_program.hpp"



namespace Render {
	void update_screen(GLFWwindow* pWindow, std::shared_ptr<Render::Shader_Program> shader_program, GLuint& vao);
	class Shader_Program;
}