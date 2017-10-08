#include "ShaderWaters.hpp"

#include "../models/Vertex.hpp"
#include "../renderer/buffers/UniformBuffer.hpp"
#include "../textures/Texture.hpp"

namespace Flounder
{
	DescriptorType ShaderWaters::typeUboScene = UniformBuffer::CreateDescriptor(0, VK_SHADER_STAGE_VERTEX_BIT);
	DescriptorType ShaderWaters::typeUboObject = UniformBuffer::CreateDescriptor(1, VK_SHADER_STAGE_ALL);
//	DescriptorType ShaderWaters::samplerReflections = Texture::CreateDescriptor(2, VK_SHADER_STAGE_FRAGMENT_BIT);
	Descriptor ShaderWaters::descriptor = Descriptor::Create({ typeUboScene, typeUboObject });
	InputState ShaderWaters::inputState = InputState::Create(Vertex::GetBindingDescriptions(), Vertex::GetAttributeDescriptions());

	PipelineCreateInfo ShaderWaters::pipelineCreateInfo =
	{
		PIPELINE_POLYGON, // pipelineModeFlags
		VK_POLYGON_MODE_FILL, // polygonMode
		VK_CULL_MODE_BACK_BIT // cullModeFlags
	};
}