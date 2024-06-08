#pragma once
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "shader_program.hpp"
#include "vo.hpp"
#include "../Game/game_objects.hpp"
#include "../Game/game_manager.hpp"
#include "../Game/text.hpp"


class Game_Manager;
class Text;

namespace Render {
	void update_screen(GLFWwindow* pWindow, int limit_frame, Game_Manager& game_manager);
	class Shader_Program;
}



