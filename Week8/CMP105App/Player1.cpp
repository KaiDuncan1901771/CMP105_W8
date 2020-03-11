#include "Player1.h"



Player1::Player1()
{

}

Player1::~Player1()
{

}

void Player1::update(float dt)
{

}

void Player1::collisionResponse(GameObject* collider)
{

}

void Player1::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::W))
	{
		move(-velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::S))
	{
		move(velocity * dt);
	}
}