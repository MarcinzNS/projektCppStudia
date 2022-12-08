#pragma once
#include <SFML/Graphics.hpp>

class Point{
    int posX;
    int posY;
    bool occupied;
    sf::CircleShape shape;
public:
    Point();
    Point(int x, int y);
    int getPosX() const;
    int getPosY() const;
    void setPos(int x, int y);

    int isOccupied() const;
    void occupy();
    
    void draw(sf::RenderWindow& window);
};