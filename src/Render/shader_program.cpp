#include "shader_program.hpp"
#include <iostream>

namespace Render {

	Shader_Program::Shader_Program(const std::string& vertex_shader, const std::string& fragment_shader)
	{
		GLuint vertex_shader_ID;
		if (!create_shader(vertex_shader, GL_VERTEX_SHADER, vertex_shader_ID)) {
			std::cerr << "VERTEX SHADER compile time error" << std::endl;
			return;
		}

		GLuint fragment_shader_ID;
		if (!create_shader(fragment_shader, GL_FRAGMENT_SHADER, fragment_shader_ID)) {
			std::cerr << "FRAGMENT SHADER compile time error" << std::endl;
			glDeleteShader(vertex_shader_ID);
			return;
		}

		shader_program_ID = glCreateProgram();
		glAttachShader(shader_program_ID, vertex_shader_ID);
		glAttachShader(shader_program_ID, fragment_shader_ID);
		glLinkProgram(shader_program_ID);

		GLint success;
		glGetProgramiv(shader_program_ID, GL_LINK_STATUS, &success);
		if (!success) {
			GLchar info_log[1024];
			glGetShaderInfoLog(shader_program_ID, 1024, nullptr, info_log);
			std::cerr << "ERROR::SHADER_PROGRAM: Link time error\n" << info_log << std::endl;
		}
		else {
			m_is_compiled = true;
		}

		glDeleteShader(vertex_shader_ID);
		glDeleteShader(fragment_shader_ID);
	}

	Shader_Program& Shader_Program::operator=(Shader_Program&& shader_program) noexcept
	{
		glDeleteProgram(shader_program_ID);
		shader_program_ID = shader_program.shader_program_ID;
		m_is_compiled = shader_program.m_is_compiled;

		shader_program.shader_program_ID = 0;
		shader_program.m_is_compiled = false;

		return *this;
	}

	Shader_Program::Shader_Program(Shader_Program&& shader_program) noexcept
	{
		shader_program_ID = shader_program.shader_program_ID;
		m_is_compiled = shader_program.m_is_compiled;

		shader_program.shader_program_ID = 0;
		shader_program.m_is_compiled = false;
	}

	bool Shader_Program::is_compiled() const
	{
		return m_is_compiled;
	}

	void Shader_Program::use() const
	{
		glUseProgram(shader_program_ID);
	}

	bool Shader_Program::create_shader(const std::string& source, const GLenum shader_type, GLuint& shader_ID)
	{
		shader_ID = glCreateShader(shader_type);
		const char* code = source.c_str();
		glShaderSource(shader_ID, 1, &code, nullptr);
		glCompileShader(shader_ID);

		GLint success;
		glGetShaderiv(shader_ID, GL_COMPILE_STATUS, &success);
		if (!success) {
			GLchar info_log[1024];
			glGetShaderInfoLog(shader_ID, 1024, nullptr, info_log);
			std::cerr << "ERROR::SHADER: Compile time error\n" << info_log << std::endl;
			return false;
		}
		return true;
	}

	Shader_Program::~Shader_Program()
	{
		glDeleteProgram(shader_program_ID);
	}
}