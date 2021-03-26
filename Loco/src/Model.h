#pragma once
#include "Shader.h"
#include "Mesh.h"
#include "Texture.h"

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

namespace Loco
{
	class Model
	{
	public:
		Model(const std::string& path)
		{
			LoadModel(path);
		}

		void Draw(Shader* shader);
	private:
		void LoadModel(const std::string& path);
		void ProcessNode(const aiNode* node, const aiScene* scene);
		Mesh ProcessMesh(const aiMesh* mesh, const aiScene* scene);
		std::vector<std::string> LoadMaterialTextures(
			aiMaterial* mat, aiTextureType type);
	private:
		std::vector<Mesh> m_Meshes;
		//std::string m_Dir;
	};
}

