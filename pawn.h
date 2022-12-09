#pragma once
#include <SFML/Graphics.hpp>

class Pawn{
    int X;
    int Y;
    sf::CircleShape shape;
    sf::CircleShape shapeBorder;
    sf::Color color;
    sf::Color colorBorder;
public:
    Pawn();
    int getPosX() const;
    int getPosY() const;
    void setColorBorder(int r, int g, int b);
    void setCord(int x, int y);
    void draw(sf::RenderWindow& window);
};