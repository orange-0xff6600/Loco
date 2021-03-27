#pragma once

namespace Loco {

	class CubeTexture
	{
	public:
		CubeTexture();
		virtual ~CubeTexture();

		void Load(const std::array<std::string, 6>& paths);

		void Bind();
		void UnBind();

	protected:
		unsigned int m_ID;
		//std::string m_Path;
	};
}


