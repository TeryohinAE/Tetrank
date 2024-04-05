#pragma once
//класс для хранения и передачи пользовательских настроек
//а также для изменения в меню настроек игры
struct Settings final{
public:
	Settings() = default;

public:
	int get_x_window_size();
	int get_y_window_size();
	void set_x_window_size(int x);
	void set_y_window_size(int y);

private:
	int x_window_size = 640;
	int y_window_size = 480;

public:
	~Settings() = default;
};
 static Settings settings;