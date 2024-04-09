#include <iostream>
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "Render/render.hpp"
#include "Settings/settings.hpp"
#include "Event_system/event_system.hpp"
#include "../res/resource_manager.hpp"

GLfloat point[] = {
    0.0f,   0.5f,   0.0f,
    0.5f,   -0.5f,  0.0f,
    -0.5f,  -0.5f,  0.0f
};
GLfloat colors[] = {
    1.0f,   0.0f,   0.0f,
    0.0f,   1.0f,   0.0f,
    0.0f,   0.0f,   1.0f
};


int main(int argc, char** argv)
{
    
    /* Initialize the library */
    if (!glfwInit()) {
        std::cout << "error inicialize glfw\n";
        return -1;
    }

    //������� ����������� ������� opengl � ���������� ������ ��� ������� ����
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    /* Create a windowed mode window and its OpenGL context */
    GLFWwindow* pWindow = glfwCreateWindow(settings.get_x_window_size(), settings.get_y_window_size(), "Tetrank", NULL, NULL);
    if (!pWindow)
    {
        std::cout << "���� �� ���� �������\n";
        glfwTerminate();
        return -1;
    }

    //������������ ���� ������� ��� ��������� ������ ����
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

    Resource_Manager resource_manager(argv[0]);
    auto pDefault_Shader_Program = resource_manager.load_shaders("Defalt_Shader", 
        "res" + resource_manager.get_path_symbol() + "shaders" + resource_manager.get_path_symbol() + "vertex_shader.txt",
        "res" + resource_manager.get_path_symbol() + "shaders" + resource_manager.get_path_symbol() + "fragment_shader.txt");
    if (!pDefault_Shader_Program) {
        std::cerr << "Can`t create shader program: " << "Default_Shader" << std::endl;
        return -1;
    }

    std::string vertex_shader;//(::vertex_shader);
        std::string fragment_shader;//(::fragment_shader);
    Render::Shader_Program shader_program(vertex_shader, fragment_shader);
    if (!shader_program.is_compiled()) {
        std::cerr << "Can`t creat shader program"<<std::endl;
        return -1;
    }

    GLuint points_vbo = 0;
    glGenBuffers(1, &points_vbo);
    glBindBuffer(GL_ARRAY_BUFFER, points_vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(point), point, GL_STATIC_DRAW);

    GLuint colors_vbo = 0;
    glGenBuffers(1, &colors_vbo);
    glBindBuffer(GL_ARRAY_BUFFER, colors_vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(colors), colors, GL_STATIC_DRAW);

    GLuint vao = 0;
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);

    glEnableVertexAttribArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, points_vbo);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, nullptr);

    glEnableVertexAttribArray(1);
    glBindBuffer(GL_ARRAY_BUFFER, colors_vbo);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, nullptr);

    /* Loop until the user closes the window */
    Render::update_screen(pWindow, pDefault_Shader_Program, vao);

    resource_manager.~Resource_Manager();

    glfwTerminate();
    return 0;
}