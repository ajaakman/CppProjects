#pragma once

#include "GLBase/ElementArrayBuffer.h"
#include "GLBase/Buffer.h"
#include "GLBase/VertexArray.h"
#include "GLBase/Program.h"
#include "../Libraries/glm/glm.hpp"

class SimpleRenderable
{
public:
	SimpleRenderable(glm::vec2 position, glm::vec2 size, int centered = 0);
	~SimpleRenderable();

	void SetColor(glm::vec4 color);
	void SetPosition(glm::vec2 position);
	void SetRotation(glm::vec3 rotation);
	void Draw();
private:
	ElementArrayBuffer* p_ElementArrayBuffer;
	VertexArray* p_VertexArray;
	Program* p_Program;
	Buffer* p_Buffer;

	glm::vec2 m_Position;
	glm::vec3 m_Rotation;
	glm::vec4 m_Color;
};

