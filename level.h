#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class Level {
private:
    static const int ROWS = 10; 
	static const int COLS = 15;
    float tileSize = 40;
    int layout[ROWS][COLS] = {
     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
     {1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1},
     {1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1},
     {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
     {1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1},
     {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1},
     {1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1},
     {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };
           
public:
    void draw(RenderWindow& window);
    int getTileValue(int row, int col) const;
};

