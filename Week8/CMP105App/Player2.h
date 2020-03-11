#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include <string>
#include <iostream>
#include "Framework/GameObject.h"
#include "Framework/Collision.h"
#include "Player1.h"

class Player2: public Player1
{
public:

	Player2();
	~Player2();

	void handleInput(float dt) override;
	void collisionResponse(GameObject* collider);
};

