#pragma once

#include "memory"

namespace RenderEngine
{
    class Sprite;

    class SpriteAnimator {
    public:
        SpriteAnimator(std::shared_ptr<Sprite> pSprite);
        size_t getCurrentFrame() { return m_currentFrame; }
        void update(const size_t delta);

    protected:
        std::shared_ptr<Sprite> m_pSprite;
        size_t m_currentFrame;
        uint64_t m_currentFrameDuration;
        uint64_t m_currentAnimationTime;
    };
}