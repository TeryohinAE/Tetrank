#include "resource_manager.hpp"
#include "../Render/render.hpp"

#include <sstream>
#include <fstream>
#include <iostream>

Resource_Manager::Resource_Manager(const std::string& executable_path)
{
	if (executable_path.find_last_of("/")) {
		res_path = executable_path.substr(0, executable_path.find_last_of("/"));
		path_symbol = "/";
	}
	
	if (executable_path.find_last_of("\\")) {
		res_path = executable_path.substr(0, executable_path.find_last_of("\\"));
		path_symbol = "\\";
	}
}

std::shared_ptr<Render::Shader_Program> Resource_Manager::load_shaders(const std::string& shader_program_name, const std::string& vertex_path, 
																	  const std::string& fragment_path)
{
	name_shader = shader_program_name;
	std::string vertex_string = get_string_file_path(vertex_path);
	if (vertex_string.empty()) {
		std::cerr << "No vertex shader!" << std::endl;
		return nullptr;
	}

	std::string fragment_string = get_string_file_path(fragment_path);
	if (fragment_string.empty()) {
		std::cerr << "No fragment shader!" << std::endl;
		return nullptr;
	}

	std::shared_ptr<Render::Shader_Program> &new_shader =
		shader_program_map.emplace(shader_program_name, std::make_shared<Render::Shader_Program>(vertex_string, fragment_string)).first->second;

	if (!new_shader->is_compiled()) {
		std::cerr << "Can`t load shader program\n"
			<< "Vertex: " << vertex_path << std::endl
			<< "Frafment: " << fragment_path << std::endl;
		return nullptr;
	}
	//names_shaders.push_back(shader_program_name);
	return new_shader;
}

std::shared_ptr<Render::Shader_Program> Resource_Manager::get_shader_program(const std::string& shader_program_name)
{
	Shader_Program_map::const_iterator i = shader_program_map.find(shader_program_name);
	if (i != shader_program_map.end()) {
		return i->second;
	}

	std::cerr << "Can`t find the shader program: " << shader_program_name << std::endl;
	return nullptr;
}

std::string Resource_Manager::get_path_symbol()
{
	return path_symbol;
}

std::string Resource_Manager::get_string_file_path(const std::string& relative_file_path) const
{

	std::fstream f;
	f.open(res_path + path_symbol + relative_file_path, std::ios::in);
	if (!f.is_open()) {
		std::cerr << "Failed to open file: " << relative_file_path << std::endl;
		return std::string{};
	}

	std::stringstream buffer;
	buffer << f.rdbuf();
	return buffer.str();
}

Resource_Manager::~Resource_Manager()
{
	shader_program_map.clear();
}
