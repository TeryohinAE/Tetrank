#pragma once
#include <memory>
#include <glad/glad.h>
#include "render.hpp"

enum Primitiv { Player, Wall };


static GLuint indeces_player_primitiv[] = {
    0,2,4,
    0,4,6,
    6,10,1,
    6,8,10,
    9,11,3,
    4,9,3,
    1,3,5,
    1,5,7
};

static GLfloat point_player_primitiv[] = {
    -0.45f,  0.8f,
    -0.45f,  -0.4f,

    0.45f,   0.8f,
    0.45f,   -0.4f,

    0.45f,   0.4f,
    0.45f,   -0.8f,

    -0.45f,  0.4f,
    -0.45f,  -0.8f,

    -0.225f,  0.4f,
    0.225f,   0.4f,

    -0.225f,  -0.4f,
    0.225f,   -0.4f
};

static GLfloat color_player_primitiv[] = {
    1.0f,   0.0f,   0.0f
};





static GLuint indeces_wall_primitiv[] = {
    0,2,4,
    0,4,6,
    6,10,1,
    6,8,10,
    9,11,3,
    4,9,3,
    1,3,5,
    1,5,7
};

static GLfloat point_wall_primitiv[] = {
    -0.45f,  0.8f,
    -0.45f,  -0.2f,

    0.45f,   0.8f,
    0.45f,   -0.2f,

    0.45f,   0.2f,
    0.45f,   -0.8f,

    -0.45f,  0.2f,
    -0.45f,  -0.8f,

    -0.1125f,  0.2f,
    0.1125f,   0.2f,

    -0.1125f,  -0.2f,
    0.1125f,   -0.2f
};

static GLfloat color_wall_primitiv[] = {
    0.0f,   0.0f,   0.0f
};


void init_VO(   GLuint& vao, GLuint& vbo, GLuint& ebo, std::shared_ptr<Render::Shader_Program> pCurrent_shader_program, 
                Primitiv type_primitiv, int& vertexColorLocation);