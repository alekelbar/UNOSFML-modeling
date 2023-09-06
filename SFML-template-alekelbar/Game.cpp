#pragma once
#include "Game.hpp"

// constructors and destructors
Game::Game() {
	initVariables();
	initWindow();
}

Game::~Game() {

}

// functions
void Game::update()
{
	this->scene->update();
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) {
		this->setScene(new Table());
	}
}

void Game::render()
{
	window->clear(sf::Color(255, 255, 255, 1));

	// Draw elements 
	this->scene->render(*window);

	window->display();
}

void Game::pollEvents()
{
	while (this->window->pollEvent(this->ev))
	{
		switch (ev.type) {
		case sf::Event::Closed:
			window->close();
			break;
		default:
			break;
		}
	}
}


bool Game::playing()
{
	return this->window->isOpen();
}

void Game::initVariables()
{
	this->window = nullptr;
	this->scene = new Menu(); // initialize menu
	this->videoMode = sf::VideoMode();
	this->ev = sf::Event();
}

void Game::initWindow()
{
	this->videoMode.height = 600;
	this->videoMode.width = 600;
	this->window = new sf::RenderWindow(this->videoMode, "My windows", sf::Style::Default);
}
