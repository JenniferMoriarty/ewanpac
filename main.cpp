#include <SFML/Graphics.hpp>
#include "player.h"
#include "level.h"
using namespace sf;

int main() {
	

	RenderWindow window(VideoMode(800, 600), "Pacman");
	Player player(150, 250);
	Clock clock;
	Level level; //uses default constructor

	// ZOMG GAME LOOP /////////////////////////////////////////////
	while (window.isOpen()) {
		float deltaTime = clock.restart().asSeconds();

		// EVENT (input) section -----------------------------------
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();
		}

		//UPDATE section-------------------------------------------
		player.handleInput();
		player.update(deltaTime, level);

		// RENDER section -----------------------------------------
		window.clear();
		level.draw(window);
		player.draw(window);
		window.display();

	} // end game loop /////////////////////////////////////////////

}

