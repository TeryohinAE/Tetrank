cmake_minimum_required(VERSION 3.26)

project(Game LANGUAGES CXX)
#set(BUILDSYSTEM_TARGETS LINUX)
#set(CMAKE_SYSTEM_NAME Linux)
#set(CMAKE_SYSTEM_PROCESSOR )
#set(CMAKE_CXX_COMPILER includes/mingw64/bin/g++)
set(CMAKE_CONFIG_TYPE Release)
#set(CMAKE_CROSSCOMPILING True)


add_subdirectory (external/GLFW)

set (GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set (GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set (GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set (GLFW_BUILD_INSTALL OFF CACHE BOOL "" FORCE)


add_executable(Game src/main.cpp)
target_link_libraries(Game glfw)
