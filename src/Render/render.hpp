#pragma once
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "shader_program.hpp"
#include "vo.hpp"
#include "../Game/game_objects.hpp"
#include "../Game/game_manager.hpp"


enum Primitiv;
enum Model_Direction;
class Model;
class Player;
class Map;
class Game_Manager;

namespace Render {
	void update_screen(GLFWwindow* pWindow, GLuint& vao, int limit_frame, Game_Manager& game_manager, GLuint& vao_wall);
	class Shader_Program;
}

void init_VO(	GLuint& vao, GLuint& vbo, GLuint& ebo, std::shared_ptr<Render::Shader_Program> pCurrent_shader_program,
				Primitiv type_primitiv, int& vertexColorLocation);


