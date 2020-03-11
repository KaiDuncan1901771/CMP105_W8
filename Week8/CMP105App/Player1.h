#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include <string>
#include <iostream>
#include "Framework/GameObject.h"
#include "Framework/Collision.h"


class Player1: public GameObject
{
public:
	Player1();
	~Player1();

	void update(float dt) override;
	void collisionResponse(GameObject* collider);
	void handleInput(float dt);

};

