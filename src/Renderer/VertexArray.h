#pragma once

#include "glad/glad.h"

#include "VertexBuffer.h"
#include "VertexBufferLayout.h"

namespace RenderEngine
{
	class VertexArray
	{
	public:
		VertexArray();
		~VertexArray();

		VertexArray(const VertexArray&) = delete;
		VertexArray& operator=(const VertexArray&) = delete;
		VertexArray& operator=(VertexArray&& vertexArray) noexcept;
		VertexArray(VertexArray&& vertexArray) noexcept;

		void bind() const;
		void unbind() const;
		void addBuffer(const VertexBuffer& vertexBuffer, const VertexBufferLayout& layout);

	private:
		GLuint m_id = 0;
		unsigned int m_elementsCount = 0;
	};
}
