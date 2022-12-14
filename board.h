#pragma once
#include <SFML/Graphics.hpp>
#include "point.h"
#include "line.h"
#include "player.h"

class Board{
    Point points[5][5];
    Line lines[56];
    Player p1;
public:
    Board();
    void draw(sf::RenderWindow& window);
};