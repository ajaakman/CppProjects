#pragma once

#include <string>
#include <unordered_map>
#include "../../Libraries/glm/glm.hpp"

class Program
{
	public:
		Program(const std::string& filepath);
		~Program();

		void Bind() const;

		void SetUniform4f(const std::string& name, glm::vec4 vector);
		void SetUniformMat4f(const std::string& name, const glm::mat4& matrix);
	private:

		struct ShaderProgramSource
		{
			std::string VertexSource;
			std::string FragmentSource;
		};
		std::string m_FilePath;
		unsigned int m_ShaderID;
		std::unordered_map<std::string, int> m_UniformLocationCache;

	private:
		ShaderProgramSource ParseShader(const std::string& filepath);
		unsigned int CompileShader(unsigned int type, const std::string& source);
		unsigned int CreateShader(const std::string& vertexShader, const std::string& fragmentShader);

		int GetUniformLocation(const std::string& name);
};
