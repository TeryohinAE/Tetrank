#pragma once
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "shader_program.hpp"




void update_screen(GLFWwindow* pWindow, Shader_Program& shader_program, GLuint& vao);