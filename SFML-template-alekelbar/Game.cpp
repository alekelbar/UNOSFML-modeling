#pragma once
#include "Game.h"


// Constructores y descructores...
Game::Game() {
	initVariables();
	initWindow();
}

Game::~Game() {

}

// functions
void Game::update()
{
}

void Game::render()
{
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
	this->videoMode = sf::VideoMode();
	this->ev = sf::Event();
}

void Game::initWindow()
{
	this->videoMode.height = 600;
	this->videoMode.width = 600;
	this->window = new sf::RenderWindow(this->videoMode, "My windows", sf::Style::Default);
}
