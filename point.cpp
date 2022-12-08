#include "point.h"
#define RPOINT 6.0f

Point::Point(int x, int y)
{
    posX = x;
    posY = y;
    occupied = false;
    shape.setRadius(RPOINT);
    shape.setOrigin(RPOINT, RPOINT);
    shape.setFillColor(sf::Color(200, 200, 220));
    shape.setPosition(posX, posY);
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
    window.draw(shape);
}