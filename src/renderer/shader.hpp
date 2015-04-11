#include <GL\glew.h>
#include <SFML/OpenGL.hpp>
#include <string>




class Shader
{
public:

	Shader();
	Shader(const char* vertex_shader, const char* fragment_shader);

	~Shader();

	void compile_from_file(const char* vertex_shader, const char* fragment_shader);


	GLuint get_program()
	{
		return program_;
	}

	void bind();

	void unbind();

protected:

	GLuint program_;
};