cmake_minimum_required(VERSION 3.26)

project(Game VERSION 0.1 LANGUAGES CXX)
#set(BUILDSYSTEM_TARGETS LINUX)
#set(CMAKE_SYSTEM_NAME Linux)
#set(CMAKE_SYSTEM_PROCESSOR )
#set(CMAKE_CXX_COMPILER includes/mingw64/bin/g++)
set(CMAKE_CONFIG_TYPE Release)
#set(CMAKE_CROSSCOMPILING True)

#--------------------------------------------------------------------
#later add sources
#--------------------------------------------------------------------



#--------------------------------------------------------------------
#Library for working with OpenGL Context
#--------------------------------------------------------------------

add_subdirectory (external/GLFW)

set (GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set (GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set (GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set (GLFW_BUILD_INSTALL OFF CACHE BOOL "" FORCE)
set (GLFW_WAYLAND_LIBDECOR OFF)

#--------------------------------------------------------------------
#Library for working with OpenGL function
#--------------------------------------------------------------------

add_subdirectory (external/GLAD)

#--------------------------------------------------------------------
#Finaly building
#--------------------------------------------------------------------

add_library (Settings STATIC src/Settings/settings.hpp src/Settings/settings.cpp)
add_library (Event_system STATIC src/Event_system/event_system.hpp src/Event_system/event_system.cpp)
add_executable(${PROJECT_NAME} src/Render/render.hpp src/main.cpp)
target_link_libraries(Event_system PUBLIC Settings glfw glad)
target_link_libraries(${PROJECT_NAME} Settings Event_system)
target_link_libraries(${PROJECT_NAME} glfw)
target_link_libraries(${PROJECT_NAME} glad)