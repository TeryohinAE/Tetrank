#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include <glad/glad.h>
#include <GLFW/glfw3.h>


int limit_frame = 60;



//надо поставить ограничение кадров в секунду
void update_screen(GLFWwindow* pWindow,GLuint &shader_program, GLuint &vao) {
    
    std::chrono::microseconds frame_time((1000/limit_frame));
    auto last_frame = std::chrono::steady_clock::now();

    while (!glfwWindowShouldClose(pWindow))
    {
        last_frame = std::chrono::steady_clock::now();
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        glUseProgram(shader_program);
        glBindVertexArray(vao);
        glDrawArrays(GL_TRIANGLES, 0, 3);

        /* Swap front and back buffers */
        glfwSwapBuffers(pWindow);

        /* Poll for and process events */
        glfwPollEvents();
        auto end_frame = std::chrono::steady_clock::now();
        std::this_thread::sleep_for((end_frame - last_frame) - frame_time);
    }
}