#include "render.hpp"
#include <chrono>
#include <thread>

namespace Render {

    void update_screen( GLFWwindow* pWindow, std::shared_ptr<Render::Shader_Program> shader_program, GLuint& vao, int limit_frame,
                        Primitiv primitiv_type, int& vertexColorLocation)
    {
        shader_program->use();
        if (primitiv_type == Player) {
            glUniform3f(vertexColorLocation, color_player_primitiv[0], color_player_primitiv[1], color_player_primitiv[2]);
        }
        if (primitiv_type == Wall) {
            glUniform3f(vertexColorLocation, color_wall_primitiv[0], color_wall_primitiv[1], color_wall_primitiv[2]);
        }

        std::chrono::microseconds frame_time((1000 / limit_frame));
        auto last_frame = std::chrono::steady_clock::now();

        while (!glfwWindowShouldClose(pWindow))
        {
            last_frame = std::chrono::steady_clock::now();
            /* Render here */
            glClearColor(0.9f, 0.9f, 0.9f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            shader_program->use();
            glBindVertexArray(vao);
            glDrawElements(GL_TRIANGLES, 24, GL_UNSIGNED_INT, 0);

            /* Swap front and back buffers */
            glfwSwapBuffers(pWindow);

            /* Poll for and process events */
            glfwPollEvents();
            auto end_frame = std::chrono::steady_clock::now();
            std::this_thread::sleep_for((end_frame - last_frame) - frame_time);
        }
    }
}