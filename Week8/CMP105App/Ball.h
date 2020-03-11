#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include <string>
#include <iostream>
#include "Framework/GameObject.h"
#include "Framework/Collision.h"


class Ball: public GameObject
{
public:
	Ball();
	~Ball();


	void update(float dt) override;
	void collisionResponse(GameObject* collider);
protected:


};

