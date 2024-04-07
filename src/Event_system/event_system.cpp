#include "event_system.hpp"

void glfwWindowSizeCallback(GLFWwindow* pWindow, int wight, int height) {
    settings.set_x_window_size(wight);
    settings.set_y_window_size(height);
    glViewport(0, 0, settings.get_x_window_size(), settings.get_y_window_size());
}

void glfwKeyCallback(GLFWwindow* pWindow, int key, int scancode, int action, int mode) {
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
        glfwSetWindowShouldClose(pWindow, GL_TRUE);
    }
}
