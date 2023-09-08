#pragma once
#include <SFML/Graphics.hpp>
#include "Scene.hpp"


class Game
{
private:
	// Variables...
	// Events
	sf::Event ev;
	// Windows
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	// Scene
	static Game* instance;
	Scene* currentScene;


	// funciones de inicializaci�n
	void initVariables();
	void initWindow();

	// Declarar el constructor de copia como privado sin implementaci�n
	Game(const Game& other);

	// Declarar el operador de asignaci�n de copia como privado sin implementaci�n
	Game& operator=(const Game& other) {};

public:
	/// cambiar la escena actual por otra 
	void switchScene(Scene* scene);

	/// obtener la instancia de juego (singleton)
	static Game& getInstance();

	/// crear un juego especificando la escena inicial
	static Game& create(Scene* initialScene);

	Game();

	~Game();

	void update();

	void render();

	void pollEvents();

	// funtions
	bool playing();

};
