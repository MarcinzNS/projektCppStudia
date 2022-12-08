#pragma once
#include <SFML/Graphics.hpp>
#include "point.h"

class Board{
    Point points[5][5];
public:
    Board();
    void draw(sf::RenderWindow& window);
};