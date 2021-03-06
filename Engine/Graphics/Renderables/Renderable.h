#pragma once

#include "../../Libraries/glm/glm.hpp"

#include "../GLBase/Texture.h"
#include "../Materials/Material.h"

class Renderable
{
public:
	Renderable(const glm::vec3 & position, const glm::vec3 & scale, const std::string & path = "none", const std::string & specularPath = "", const glm::vec3 & rotation = glm::vec3(0.f, 0.f, 0.f), const glm::vec4& color = glm::vec4(1.f, 1.f, 1.f, 1.f));
	Renderable(const glm::vec3 & position, const glm::vec3 & scale, const glm::vec3 & rotation = glm::vec3(0.f, 0.f, 0.f), const glm::vec4 & color = glm::vec4(1.f, 1.f, 1.f, 1.f));
	~Renderable();

	glm::vec3 Position;
	glm::vec3 Scale;
	glm::vec3 Rotation;
	glm::vec4 Color;

	inline Material* GetMaterial() const& { return p_mMaterial; }
private:
	Texture* p_mTexture;
	Texture* p_mSpecularTexture;

	Material* p_mMaterial;
};

