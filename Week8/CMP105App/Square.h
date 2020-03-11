#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include <string>
#include <iostream>
#include "Framework/GameObject.h"
#include "Framework/Collision.h"

class Square: public GameObject
{
public:
	Square();
	~Square();

	void update(float dt) override;
	void collisionResponse(GameObject* collider);
	void handleInput(float dt);
};

