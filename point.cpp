#include "point.h"

Point::Point(int x=0, int y=0)
{
    posX = x;
    posY = y;
    occupied = false;
    shape.setRadius(16.0f);
}

int Point::getPosX() const {return posX;}
int Point::getPosY() const {return posY;}
void Point::setPos(int x, int y){
    posX = x;
    posY = y;
}

int Point::isOccupied() const {return occupied;}
void Point::occupy() {occupied = !occupied;}

void Point::draw(sf::RenderWindow& window){
    shape.setFillColor(sf::Color(220, 200, 200));
    shape.setPosition(posX, posY);
    window.draw(shape);
}