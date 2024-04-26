#include "Game/game_objects.hpp"

#include <iostream>
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/mat4x4.hpp>
#include "Render/render.hpp"
#include "Settings/settings.hpp"
#include "Event_system/event_system.hpp"
#include "Resorce_manager/resource_manager.hpp"



std::vector<std::vector<char>> map = {
    {'w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w'},
    {'w','v','v','v','v','v','v','v','v','v','v','w','v','v','v','v','v','v','v','v','v','v','w'},
    {'w','v','v','v','v','v','v','v','v','v','v','w','v','v','v','v','v','v','v','v','v','v','w'},
    {'w','v','p','p','p','v','v','v','v','v','v','w','v','v','v','v','v','p','p','p','v','v','w'},
    {'w','v','p','p','p','v','v','v','v','v','v','w','v','v','v','v','v','p','p','p','v','v','w'},
    {'w','v','p','p','p','v','v','v','v','v','v','w','v','v','v','v','v','p','p','p','v','v','w'},
    {'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
    {'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
    {'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
    {'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
    {'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
    {'w','w','w','w','w','w','v','v','v','v','v','v','v','v','v','v','v','w','w','w','w','w','w'},    
    {'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
    {'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
    {'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
    {'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
    {'w','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','v','w'},
    {'w','v','p','p','p','v','v','v','v','v','v','w','v','v','v','v','v','p','p','p','v','v','w'},
    {'w','v','p','p','p','v','v','v','v','v','v','w','v','v','v','v','v','p','p','p','v','v','w'},
    {'w','v','p','p','p','v','v','v','v','v','v','w','v','v','v','v','v','p','p','p','v','v','w'},
    {'w','v','v','v','v','v','v','v','v','v','v','w','v','v','v','v','v','v','v','v','v','v','w'},
    {'w','v','v','v','v','v','v','v','v','v','v','w','v','v','v','v','v','v','v','v','v','v','w'},
    {'w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w','w'}
};




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

    Map dust2(map, vao_wall, pDefault_Shader_Program);

    Player p1(pDefault_Shader_Program, dust2.get_player_spawnpoint(1, 'x'), dust2.get_player_spawnpoint(1, 'y'), vao_player, "00000", dust2.get_scale_models());
    Player p2(pDefault_Shader_Program, dust2.get_player_spawnpoint(2, 'x'), dust2.get_player_spawnpoint(2, 'y'), vao_player, "sam", dust2.get_scale_models());
    Player p3(pDefault_Shader_Program, dust2.get_player_spawnpoint(3, 'x'), dust2.get_player_spawnpoint(3, 'y'), vao_player, "bob", dust2.get_scale_models());
    Player p4(pDefault_Shader_Program, dust2.get_player_spawnpoint(4, 'x'), dust2.get_player_spawnpoint(4, 'y'), vao_player, "scot", dust2.get_scale_models());





    /* Loop until the user closes the window */
    Render::update_screen(pWindow, vao_player, settings.get_limit_frame(), p1, p2, p3, p4, dust2, vao_wall);

    //pDefault_Shader_Program.~shared_ptr();
    //resource_manager.~Resource_Manager();
    glfwTerminate();
    return 0;
}