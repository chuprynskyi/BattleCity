#pragma once
#include <memory>
#include <string>
#include <vector>

class IGameObject;

class Level
{
public:
	Level(const std::vector<std::string>& levelDescription);
	void render();
	void update(const size_t delta);
private:
	unsigned int m_width;
	unsigned int m_height;

	std::vector<std::shared_ptr<IGameObject>> m_levelObjects;
};
