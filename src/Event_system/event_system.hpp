#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "../Settings/settings.hpp"


//������� ��� ������������ ����������������� ��������� ������� ����
void glfwWindowSizeCallback(GLFWwindow* pWindow, int wight, int height);

//������� ��� ����������� ������� ������ � ����� ������� ������� ����
void glfwKeyCallback(GLFWwindow* pWindow, int key, int scancode, int action, int mode);