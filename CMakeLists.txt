cmake_minimum_required(VERSION 3.26)

project(Game VERSION 0.1)
set(CMAKE_CXX_STANDARD 17)
#target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)

#set(BUILDSYSTEM_TARGETS LINUX)
#set(CMAKE_SYSTEM_NAME Linux)
#set(CMAKE_SYSTEM_PROCESSOR )
#set(CMAKE_CXX_COMPILER includes/mingw64/bin/g++)
#set(CMAKE_CONFIGURATION_TYPES Release)
set(CMAKE_CONFIGURATION_TYPES Debug)
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
#Library for matrix algorytm
#--------------------------------------------------------------------

add_subdirectory (external/glm-1.0.1)
include_directories(external/glm-1.0.1)

#--------------------------------------------------------------------
#Finaly building
#--------------------------------------------------------------------

add_library (Settings STATIC src/Settings/settings.hpp src/Settings/settings.cpp)
add_library (Event_system STATIC src/Event_system/event_system.hpp src/Event_system/event_system.cpp)
add_library (Render STATIC	src/Render/render.hpp src/Render/update_screen.cpp src/Render/shader_program.hpp src/Render/shader_program.cpp
							src/Render/vo.hpp src/Render/vo.cpp src/Render/model.cpp src/Render/model.hpp)
add_library (Resource_Manager STATIC src/Resorce_manager/resource_manager.hpp src/Resorce_manager/resource_manager.cpp)
add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(Event_system PUBLIC Settings glfw glad)
target_link_libraries(Render PUBLIC Settings glfw glad)
target_link_libraries(Resource_Manager PUBLIC Render Settings glfw glad)
target_link_libraries(${PROJECT_NAME} Settings Event_system Render Resource_Manager)
target_link_libraries(${PROJECT_NAME} glfw)
target_link_libraries(${PROJECT_NAME} glad)

set_target_properties(${PROJECT_NAME} Settings Event_system Render PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)
#set_target_properties(Settings PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)
#set_target_properties(Event_system PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)
#set_target_properties(Render PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)



add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
					COMMAND ${CMAKE_COMMAND} -E copy_directory
					${CMAKE_SOURCE_DIR}/res $<TARGET_FILE_DIR:${PROJECT_NAME}>/res)