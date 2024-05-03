#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <map>
#include <vector>

//класс для хранения и передачи пользовательских настроек
//а также для изменения в меню настроек игры
struct Settings final{
public:
	Settings();

public:
	int get_x_window_size();
	int get_y_window_size();
	void set_x_window_size(int x);
	void set_y_window_size(int y);

	bool is_there_a_key(int key);
	bool get_key_state(int key);
	void change_key_state(int key, bool new_state);
	std::vector<std::vector<int>> get_players_control_key();

	int get_limit_frame();
	void set_limit_frame();

private:
	int x_window_size = 1280;
	int y_window_size = 720;
	int limit_frame = 480;


	std::map<int, bool> key_storage;

	int player_1_move_up = GLFW_KEY_W;
	int player_1_move_down = GLFW_KEY_S;
	int player_1_move_left = GLFW_KEY_A;
	int player_1_move_right = GLFW_KEY_D;
	int player_1_shoot = GLFW_KEY_LEFT_SHIFT;

	int player_2_move_up = GLFW_KEY_I;
	int player_2_move_down = GLFW_KEY_K;
	int player_2_move_left = GLFW_KEY_J;
	int player_2_move_right = GLFW_KEY_L;
	int player_2_shoot = GLFW_KEY_SPACE;

	int player_3_move_up = GLFW_KEY_UP;
	int player_3_move_down = GLFW_KEY_DOWN;
	int player_3_move_left = GLFW_KEY_LEFT;
	int player_3_move_right = GLFW_KEY_RIGHT;
	int player_3_shoot = GLFW_KEY_ENTER;

	int player_4_move_up = GLFW_KEY_KP_8;
	int player_4_move_down = GLFW_KEY_KP_5;
	int player_4_move_left = GLFW_KEY_KP_4;
	int player_4_move_right = GLFW_KEY_KP_6;
	int player_4_shoot = GLFW_KEY_KP_ENTER;

	int up_select_menu = GLFW_KEY_UP;
	int down_select_menu = GLFW_KEY_DOWN;
	int select_menu = GLFW_KEY_ENTER;
	int back_menu = GLFW_KEY_ESCAPE;

	int previos_optoin = GLFW_KEY_LEFT;
	int next_option = GLFW_KEY_RIGHT;

public:
	~Settings() = default;
};