#pragma once
#include <glew\glew.h>
#include <string>
using namespace std;

class GLS_Program
{
private:
	GLuint _fragmentShaderID;
	GLuint _vertexShaderID;
	GLuint _programID;
	int _numAttribute;

	void compileShader(
		const string& shaderpath, GLuint id);
public:
	GLS_Program();
	~GLS_Program();

	void compileShaders(
		const string& vertexShaderFilePath,
		const string& fragmentShaderFilePath
	);
	void addAttribute();
	void use();
	void unuse();
	void linkShader();
};
