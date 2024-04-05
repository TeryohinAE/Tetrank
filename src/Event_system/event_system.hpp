#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "../Settings/settings.hpp"


//функция для программного пользовательского изменения размера окна
void glfwWindowSizeCallback(GLFWwindow* pWindow, int wight, int height);

//функция для улавливания клавиши эскейп и отдаёт команду закрыть окно
void glfwKeyCallback(GLFWwindow* pWindow, int key, int scancode, int action, int mode);