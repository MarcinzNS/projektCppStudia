#pragma once
#include <SFML/Graphics.hpp>
#include "point.h"
#include "line.h"

class Board{
    Point points[5][5];
    Line lines;
public:
    Board();
    void draw(sf::RenderWindow& window);
};