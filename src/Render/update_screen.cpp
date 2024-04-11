#include "render.hpp"
#include <chrono>
#include <thread>

namespace Render {

    int limit_frame = 60;

    void update_screen(GLFWwindow* pWindow, std::shared_ptr<Render::Shader_Program> shader_program, GLuint& vao) {

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