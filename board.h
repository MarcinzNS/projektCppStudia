#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "point.h"
#include "line.h"

class Board{
    Point points[5][5];
    Line lines[56];
public:
    Board();
    void draw(sf::RenderWindow& window);
};