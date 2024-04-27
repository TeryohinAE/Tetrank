#include "Game/game_objects.hpp"
#include "Game/game_manager.hpp"
#include <iostream>
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/mat4x4.hpp>
#include "Render/render.hpp"
#include "Settings/settings.hpp"
#include "Event_system/event_system.hpp"
#include "Resorce_manager/resource_manager.hpp"








int main(int argc, char** argv)
{

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
    GLFWwindow* pWindow = glfwCreateWindow(settings.get_x_window_size(), settings.get_y_window_size(), "Tetrank", NULL, NULL);
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

    
    Resource_Manager resource_manager(argv[0]);
    auto pDefault_Shader_Program = resource_manager.load_shaders("Defalt_Shader",
        "res" + resource_manager.get_path_symbol() + "shaders" + resource_manager.get_path_symbol() + "vertex_shader.txt",
        "res" + resource_manager.get_path_symbol() + "shaders" + resource_manager.get_path_symbol() + "fragment_shader.txt");
    if (!pDefault_Shader_Program) {
        std::cerr << "Can`t create shader program: " << "Default_Shader" << std::endl;
        return -1;
    }

    //std::string vertex_shader;//(::vertex_shader);
    //    std::string fragment_shader;//(::fragment_shader);
    //Render::Shader_Program shader_program(vertex_shader, fragment_shader);
    //if (!shader_program.is_compiled()) {
    //    std::cerr << "Can`t creat shader program"<<std::endl;
    //    return -1;
    //}

    int vertexColorLocation = glGetUniformLocation(pDefault_Shader_Program->get_shader_program_ID(), "Color");

    GLuint vao_player = 0;
    GLuint points_player_vbo = 0;  
    GLuint ebo_player;

    GLuint vao_wall = 0;
    GLuint points_wall_vbo = 0;
    GLuint ebo_wall;

    init_VO(vao_player, points_player_vbo, ebo_player, pDefault_Shader_Program, PLAYER, vertexColorLocation);
    init_VO(vao_wall, points_wall_vbo, ebo_wall, pDefault_Shader_Program, WALL, vertexColorLocation);

    Game_Manager game_manager(pDefault_Shader_Program, vao_wall);

    game_manager.add_player(vao_player, "00000");
    game_manager.add_player(vao_player, "sam");
    game_manager.add_player(vao_player, "bob");
    game_manager.add_player(vao_player, "scot");



    /* Loop until the user closes the window */
    Render::update_screen(pWindow, vao_player, settings.get_limit_frame(), game_manager, vao_wall);

    //pDefault_Shader_Program.~shared_ptr();
    //resource_manager.~Resource_Manager();
    glfwTerminate();
    return 0;
}