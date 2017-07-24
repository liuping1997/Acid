#pragma once

#include "../renderer/irenderer.h"

#include "skybox.h"

namespace flounder
{
	class rendererskybox :
		public irenderer
	{
	private:
		shader *m_shader;
	public:
		rendererskybox();

		~rendererskybox();

		void render(const vector4 &clipPlane, const icamera &camera) override;
	};
}