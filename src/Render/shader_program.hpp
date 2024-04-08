#pragma once
#include <glad/glad.h>
#include <string>
class Shader_Program {
public:
	Shader_Program() = delete;
	Shader_Program(const std::string &vertex_shader, const std::string &fragment_shader);
	Shader_Program(Shader_Program&) = delete;
	Shader_Program& operator = (const Shader_Program&) = delete;
	Shader_Program& operator = (Shader_Program&& shader_program) noexcept;
	Shader_Program(Shader_Program&& shader_program) noexcept;

public:
	bool is_compiled() const;
	void use() const;

private:
	bool create_shader(const std::string& source, const GLenum shader_type, GLuint& shader_ID);

	bool m_is_compiled = false;
	GLuint shader_program_ID = 0;

public:
	~Shader_Program();
};