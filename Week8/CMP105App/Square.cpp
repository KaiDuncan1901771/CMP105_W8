#include "Square.h"

Square::Square() 
{

}

Square::~Square() 
{

}

void Square::update(float dt) 
{
	move(velocity * dt);
	if (getPosition().x < 0)
	{
		setPosition(600, getPosition().y);
	}

	if (getPosition().x > 1200)
	{
		setPosition(600, getPosition().y);
	}
}

void Square::collisionResponse(GameObject* collider)
{
	velocity.x = -velocity.x;
}

void Square::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Right))
	{

	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{

	}
}