#pragma once
#include <SFML/Graphics.hpp>

class Pawn{
    int X;
    int Y;
    sf::CircleShape shape;
public:
    Pawn();
    void draw(sf::RenderWindow& window);
};