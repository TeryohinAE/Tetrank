#include "render.hpp"
#include <chrono>
#include <thread>

namespace Render {

    void update_screen(GLFWwindow* pWindow, int limit_frame, Game_Manager& game_manager)
    {

        std::chrono::nanoseconds frame_time((1000000000 / limit_frame));
        auto last_frame = std::chrono::high_resolution_clock::now();

        while (!glfwWindowShouldClose(pWindow))
        {
            last_frame = std::chrono::high_resolution_clock::now();
            /* Render here */
            game_manager.game_tick();
            glClearColor(0.9f, 0.9f, 0.9f, 1.0f);
            glClear(GL_COLOR_BUFFER_BIT);
            game_manager.draw_objects();
            //text.draw(vao_text);

            /* Swap front and back buffers */
            glfwSwapBuffers(pWindow);

            /* Poll for and process events */
            glfwPollEvents();
            auto end_frame = std::chrono::high_resolution_clock::now();
            if ((end_frame - last_frame) <= frame_time) {
                std::this_thread::sleep_for((frame_time - (end_frame - last_frame))/2);
            }
        }
    }
}