#pragma once
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "shader_program.hpp"
#include "vo.hpp"
#include "../Game/game_objects.hpp"


enum Primitiv;
enum Model_Direction;
class Model;
class Player;

namespace Render {
	void update_screen(GLFWwindow* pWindow, GLuint& vao, int limit_frame, Player& p1, Player& p2, Player& p3, Player& p4);
	class Shader_Program;
}

void init_VO(	GLuint& vao, GLuint& vbo, GLuint& ebo, std::shared_ptr<Render::Shader_Program> pCurrent_shader_program,
				Primitiv type_primitiv, int& vertexColorLocation);


