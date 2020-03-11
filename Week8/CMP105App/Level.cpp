#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	ball1.setSize(sf::Vector2f(25, 25));
	ball1.setPosition(600, 100);
	ball1.setCollisionBox(sf::FloatRect(0, 0, 25, 25));
	ball1.setFillColor(sf::Color::Red);
	ball1.setVelocity(sf::Vector2f(300, 0));


	/*ball2.setSize(sf::Vector2f(100, 100));
	ball2.setPosition(500, 100);
	ball2.setFillColor(sf::Color::Blue);
	ball2.setOutlineColor(sf::Color::Red);
	ball2.setOutlineThickness(3.f);
	ball2.setVelocity(sf::Vector2f(-100, 0));

	square1.setSize(sf::Vector2f(50, 50));
	square1.setCollisionBox(sf::FloatRect(0, 0, 50, 50));
	square1.setPosition(0, 200);
	square1.setVelocity(50, 0);
	square1.setFillColor(sf::Color::Blue);*/

	square2.setSize(sf::Vector2f(50, 50));
	square2.setCollisionBox(sf::FloatRect(0, 0, 50, 50));
	square2.setPosition(600, 200);
	square2.setVelocity(-300, 0);
	square2.setFillColor(sf::Color::Red);

	player1.setSize(sf::Vector2f(25, 150));
	player1.setCollisionBox(sf::FloatRect(0, 0, 25, 150));
	player1.setPosition(20, 200);
	player1.setVelocity(0, 200);
	player1.setFillColor(sf::Color::Red);
	player1.setInput(input);

	player2.setSize(sf::Vector2f(25, 150));
	player2.setCollisionBox(sf::FloatRect(0, 0, 25, 150));
	player2.setPosition(1150, 200);
	player2.setVelocity(0, 200);
	player2.setFillColor(sf::Color::Green);
	player2.setInput(input);


	
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{

}

// Update game objects
void Level::update(float dt)
{
	ball1.update(dt);
	//ball2.update(dt);

	//square1.update(dt);
	square2.update(dt);

	player1.update(dt);
	player1.handleInput(dt);

	player2.update(dt);
	player2.handleInput(dt);

	if (Collision::checkBoundingCircle(&ball1, &ball2))
	{
		ball1.collisionResponse(NULL);
		ball2.collisionResponse(NULL);
	}

	if (Collision::checkBoundingBox(&square1, &square2))
	{
		ball1.collisionResponse(NULL);
		square2.collisionResponse(NULL);
	}

	if (Collision::checkBoundingBox(&player1, &square2))
	{
		player1.collisionResponse(NULL);
		square2.collisionResponse(NULL);
	}


	if (Collision::checkBoundingBox(&player2, &square2))
	{
		player2.collisionResponse(NULL);
		square2.collisionResponse(NULL);
	}
}

// Render level
void Level::render()
{
	beginDraw();

	//window->draw(ball1);
	//window->draw(ball2);

	//window->draw(square1);
	window->draw(square2);

	window->draw(player1);
	window->draw(player2);

	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}