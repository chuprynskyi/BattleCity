#include "VertexBufferLayout.h"

namespace RenderEngine
{
	VertexBufferLayout::VertexBufferLayout()
	{

	}

	void VertexBufferLayout::reserveElements(const size_t count)
	{
		m_layoutElements.reserve(count);
	}						

	void VertexBufferLayout::addElementLayoutFloat(const unsigned int count, const bool normalized)
	{
		m_layoutElements.push_back({ static_cast<GLint>(count), GL_FLOAT, normalized, static_cast<unsigned int>(count * sizeof(GLfloat)) });
		m_stride += m_layoutElements.back().size;
	}
}
