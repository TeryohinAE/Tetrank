#include "settings.hpp"
Settings::Settings()
{
	key_storage[player_1_move_up] = false;
	key_storage[player_1_move_down] = false;
	key_storage[player_1_move_left] = false;
	key_storage[player_1_move_right] = false;
	key_storage[player_1_shoot] = false;

	key_storage[player_2_move_up] = false;
	key_storage[player_2_move_down] = false;
	key_storage[player_2_move_left] = false;
	key_storage[player_2_move_right] = false;
	key_storage[player_2_shoot] = false;

	key_storage[player_3_move_up] = false;
	key_storage[player_3_move_down] = false;
	key_storage[player_3_move_left] = false;
	key_storage[player_3_move_right] = false;
	key_storage[player_3_shoot] = false;

	key_storage[player_4_move_up] = false;
	key_storage[player_4_move_down] = false;
	key_storage[player_4_move_left] = false;
	key_storage[player_4_move_right] = false;
	key_storage[player_4_shoot] = false;

	key_storage[up_select_menu] = false;
	key_storage[down_select_menu] = false;
	key_storage[select_menu] = false;
	key_storage[back_menu] = false;

	key_storage[previos_optoin] = false;
	key_storage[next_option] = false;
}
int Settings::get_x_window_size() {
	return x_window_size;
}
int Settings::get_y_window_size() {
	return y_window_size;
}

void Settings::set_x_window_size(int x) {
	this->x_window_size = x;
}

void Settings::set_y_window_size(int y) {
	this->y_window_size = y;
}

bool Settings::is_there_a_key(int key)
{
	if (key == player_1_move_up) {
		return true;
	}
	else if (key == player_1_move_down) {
		return true;
	}
	else if (key == player_1_move_left) {
		return true;
	}
	else if (key == player_1_move_right) {
		return true;
	}
	else if (key == player_1_shoot) {
		return true;
	}
	if (key == player_2_move_up) {
		return true;
	}
	else if (key == player_2_move_down) {
		return true;
	}
	else if (key == player_2_move_left) {
		return true;
	}
	else if (key == player_2_move_right) {
		return true;
	}
	else if (key == player_2_shoot) {
		return true;
	}
	if (key == player_3_move_up) {
		return true;
	}
	else if (key == player_3_move_down) {
		return true;
	}
	else if (key == player_3_move_left) {
		return true;
	}
	else if (key == player_3_move_right) {
		return true;
	}
	else if (key == player_3_shoot) {
		return true;
	}
	if (key == player_4_move_up) {
		return true;
	}
	else if (key == player_4_move_down) {
		return true;
	}
	else if (key == player_4_move_left) {
		return true;
	}
	else if (key == player_4_move_right) {
		return true;
	}
	else if (key == player_4_shoot) {
		return true;
	}
	else if (key == up_select_menu) {
		return true;
	}
	else if (key == down_select_menu) {
		return true;
	}
	else if (key == select_menu) {
		return true;
	}
	else if (key == back_menu) {
		return true;
	}
	else if (key == previos_optoin) {
		return true;
	}
	else if (key == next_option) {
		return true;
	}
	return false;
}

bool Settings::get_key_state(int key)
{
	if (!key_storage.contains(key)) {
		return false;
	}
	return key_storage.at(key);
}

void Settings::change_key_state(int key, bool new_state)
{
	if (key_storage.contains(key)) {
		key_storage[key] = new_state;
	}
}

std::vector<std::vector<int>> Settings::get_players_control_key()
{
	std::vector<std::vector<int>> temp;
	temp.push_back(std::vector<int>{});
	temp[0].push_back(player_1_move_up);
	temp[0].push_back(player_1_move_down);
	temp[0].push_back(player_1_move_left);
	temp[0].push_back(player_1_move_right);
	temp[0].push_back(player_1_shoot);
	temp.push_back(std::vector<int>{});
	temp[1].push_back(player_2_move_up);
	temp[1].push_back(player_2_move_down);
	temp[1].push_back(player_2_move_left);
	temp[1].push_back(player_2_move_right);
	temp[1].push_back(player_2_shoot);
	temp.push_back(std::vector<int>{});
	temp[2].push_back(player_3_move_up);
	temp[2].push_back(player_3_move_down);
	temp[2].push_back(player_3_move_left);
	temp[2].push_back(player_3_move_right);
	temp[2].push_back(player_3_shoot);
	temp.push_back(std::vector<int>{});
	temp[3].push_back(player_4_move_up);
	temp[3].push_back(player_4_move_down);
	temp[3].push_back(player_4_move_left);
	temp[3].push_back(player_4_move_right);
	temp[3].push_back(player_4_shoot);
	return temp;
}

int Settings::get_limit_frame()
{
	return limit_frame;
}
