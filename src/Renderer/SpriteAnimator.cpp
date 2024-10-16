#include "SpriteAnimator.h"

namespace RenderEngine
{
	SpriteAnimator::SpriteAnimator(std::shared_ptr<Sprite> pSprite)
		: m_pSprite(pSprite)
		, m_currentFrame(0)
		, m_currentFrameDuration(m_pSprite->getFrameDuration)
		, m_currentAnimationTime(0)
	{
	}
	void SpriteAnimator::update(const size_t delta)
	{
	}
}
