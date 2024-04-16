#include "render.hpp"
#include <chrono>
#include <thread>

namespace Render {

    void update_screen( GLFWwindow* pWindow, GLuint& vao, int limit_frame, Player &p1)
    {
        std::chrono::microseconds frame_time((1000 / limit_frame));
        auto last_frame = std::chrono::steady_clock::now();

        while (!glfwWindowShouldClose(pWindow))
        {
            last_frame = std::chrono::steady_clock::now();
            /* Render here */
            glClearColor(0.9f, 0.9f, 0.9f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);

            p1.draw(vao);

            

            /* Swap front and back buffers */
            glfwSwapBuffers(pWindow);

            /* Poll for and process events */
            glfwPollEvents();
            auto end_frame = std::chrono::steady_clock::now();
            std::this_thread::sleep_for((end_frame - last_frame) - frame_time);
        }
    }
}