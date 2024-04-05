#include "settings.hpp"
#pragma once
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
