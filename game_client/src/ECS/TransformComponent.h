#pragma once
#include "ECS.h"
#include "../../../shared/Vector2D.h"

class TransformComponent : public Component
{
public:
	Vector2D position;
	Vector2D velocity;

	int height = 32;
	int width = 32;
	double scale = 1;
	int mapId = 1;

	int speed = 3;

	bool blocked = false;

	TransformComponent()
	{
		position.Zero();
	}

	TransformComponent(int sc)
	{
		position.Zero();
		scale = sc;
	}

	TransformComponent(float x, float y)
	{
		position.Zero();
	}
TransformComponent(float x, float y, int h, int w, float sc, int speed)
	{
		position.x = x;
		position.y = y;
		height = h;
		width = w;
		scale = sc;
		this->speed = speed;
	}
	TransformComponent(float x, float y, int h, int w, float sc)
	{
		TransformComponent(x ,y, h, w, sc, 3);
	}
	

	void init() override
	{
		velocity.Zero();
	}
	void update() override
	{
		position.x += velocity.x * speed;
		position.y += velocity.y * speed;
	}

};