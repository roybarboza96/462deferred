#include "GL\glew.h"
#include "renderer.hpp"
#include <glm/glm.hpp>

bool Renderer::initialize( const Camera& camera, const Scene& scene )
{
	return true;
}

void Renderer::render( const Camera& camera, const Scene& scene )
{
	GLuint test;
	glGenBuffers(1, &test);
}

void Renderer::release()
{

}