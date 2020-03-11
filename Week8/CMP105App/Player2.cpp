#include "Player2.h"


Player2::Player2()
{

}

Player2::~Player2()
{

}

void Player2::collisionResponse(GameObject* collider)
{

}

void Player2::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Up))
	{
		move(-velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Down))
	{
		move(velocity * dt);
	}
}