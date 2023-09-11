cmake_minimum_required(VERSION 3.26)

project(Game)
set(BUILDSYSTEM_TARGETS LINUX)
#set(CMAKE_SYSTEM_NAME Linux)
#set(CMAKE_SYSTEM_PROCESSOR )
#set(CMAKE_CXX_COMPILER includes/mingw64/bin/g++)
set(CMAKE_CONFIGURATION_TYPES Release)
set(CMAKE_CROSSCOMPILING True)


add_executable(${PROJECT_NAME} src/main.cpp)
