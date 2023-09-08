#pragma once
#include "Game.hpp"

Game* Game::instance = nullptr;

Game& Game::getInstance()
{
	std::cout << "[LOG]: Instancia de juego: " << ((instance == nullptr) ? "valida" : "invalida") << "\n";
	if (instance == nullptr) {
		instance = new Game();
	}
	return *instance;
}

Game& Game::create(Scene* initialScene)
{
	if (instance) {
		std::cerr << "[ERROR]: can't call create(), game already running. \n" << std::endl;
	}
	else {
		Game& myGame = Game::getInstance();
		myGame.currentScene = initialScene;
		myGame.window->setFramerateLimit(10);
	}
	return getInstance();
}


// constructors and destructors
Game::Game() {
	initVariables();
	initWindow();
}

void Game::switchScene(Scene* scene)
{
	std::cout << "[LOG]: Cambiando de escena a una escena válida: " << (scene != nullptr) << "\n";
	this->currentScene = scene; // Establecer la nueva escena como la escena actual
	std::cout << "[LOG]: Actualización de la escena: " << scene << " = " << this->currentScene << "\n";
}


Game::~Game() {

}

// functions
void Game::update()
{
	currentScene->update(*window);
}

void Game::render()
{
	std::cout << "[LOG]: La instancia actual -> " << instance << "\n";
	std::cout << "[LOG]: La scena actual -> " << (currentScene) << "\n";

	window->clear(sf::Color(0, 0, 0, 255));
	currentScene->render(*window);
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
	this->videoMode = sf::VideoMode();
	this->ev = sf::Event();
}

void Game::initWindow()
{
	this->videoMode.height = 600;
	this->videoMode.width = 600;
	this->window = new sf::RenderWindow(this->videoMode, "My windows", sf::Style::Default | sf::Style::Close);
}
