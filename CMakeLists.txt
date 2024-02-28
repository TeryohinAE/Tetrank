cmake_minimum_required(VERSION 3.26)

project(Game LANGUAGES CXX)
#set(BUILDSYSTEM_TARGETS LINUX)
#set(CMAKE_SYSTEM_NAME Linux)
#set(CMAKE_SYSTEM_PROCESSOR )
#set(CMAKE_CXX_COMPILER includes/mingw64/bin/g++)
set(CMAKE_CONFIG_TYPE Release)
#set(CMAKE_CROSSCOMPILING True)

#--------------------------------------------------------------------
#Library for working with OpenGL Context
#--------------------------------------------------------------------

add_subdirectory (external/GLFW)

set (GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set (GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set (GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set (GLFW_BUILD_INSTALL OFF CACHE BOOL "" FORCE)

#--------------------------------------------------------------------
#Library for working with OpenGL function
#--------------------------------------------------------------------

add_subdirectory (external/GLAD)

#--------------------------------------------------------------------
#Finaly building
#--------------------------------------------------------------------

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} glfw)
target_link_libraries(${PROJECT_NAME} glad)
