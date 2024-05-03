#pragma once
#include <string>
#include <memory>
#include <map>
#include <vector>
#include "../Render/render.hpp"

//#include "../src/Render/render.hpp"
namespace Render {
	class Shader_Program;
}

class Resource_Manager final {
public:
	Resource_Manager() = delete;
	Resource_Manager(const std::string& executable_path);

	Resource_Manager(const Resource_Manager&) = delete;
	Resource_Manager& operator=(const Resource_Manager&) = delete;
	Resource_Manager& operator=(Resource_Manager&) = delete;
	Resource_Manager(Resource_Manager&&) = delete;

public:
	std::shared_ptr<Render::Shader_Program> load_shaders(const std::string &shader_program_name, const std::string &vertex_path, 
														const std::string &fragment_path);
	std::shared_ptr<Render::Shader_Program> get_shader_program(const std::string& shader_program_name);
	std::string get_path_symbol();

private:
	std::string get_string_file_path(const std::string &relative_file_path) const;

	typedef std::map<const std::string, std::shared_ptr<Render::Shader_Program>> Shader_Program_map;
	Shader_Program_map shader_program_map;

	std::string path_symbol;
	std::string res_path;
	std::string name_shader;

	//std::vector<std::string> names_shaders;

public:
	~Resource_Manager();
};