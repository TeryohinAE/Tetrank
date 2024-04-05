#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "Render/render.hpp"
#include "Settings/settings.hpp"
#include "Event_system/event_system.hpp"



int main(void)
{
//    a();
    GLFWwindow* pWindow;
    
    /* Initialize the library */
    if (!glfwInit()) {
        std::cout << "error inicialize glfw\n";
        return -1;
    }

    //задание пользования версией opengl и оставление только кор функций либы
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    /* Create a windowed mode window and its OpenGL context */
    pWindow = glfwCreateWindow(settings.get_x_window_size(), settings.get_y_window_size(), "Tetrank", NULL, NULL);
    if (!pWindow)
    {
        std::cout << "окно не было создано\n";
        glfwTerminate();
        return -1;
    }

    //регистрируем нашу функцию для изменения размер окна
    glfwSetWindowSizeCallback(pWindow, glfwWindowSizeCallback);

    glfwSetKeyCallback(pWindow, glfwKeyCallback);

    /* Make the window's context current */
    glfwMakeContextCurrent(pWindow);

    /* Initialize the library */
    if (!gladLoadGL())
    {
        std::cout << "Can`t Load Glad Yomayo";
        return -1;
    }

    std::cout << "Render: " << glGetString(GL_RENDERER) << std::endl;
    /* Out version OpenGL */
    std::cout << "OpenGL version " << glGetString(GL_VERSION) << std::endl;

    //Eperiment front (todo: delet this)
    glClearColor(1, 0, 0, 1);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(pWindow))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(pWindow);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}