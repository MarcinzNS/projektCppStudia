#include "line.h"

Line::Line(){
    p1 = Point(0,0);
    p2 = Point(100,100);

    float x1 = p1.getPosX();
    float y1 = p1.getPosY();

    float x2 = p2.getPosX();
    float y2 = p2.getPosY();

    float dl = sqrt( pow(x1-x2, 2) + pow(y1-y2, 2));

    line.setSize(sf::Vector2f(dl, 2));
    if (x2==x1)
        line.rotate(90);
    else if (x2!=x1)
        line.rotate(atan((y2-y1)/(x2-x1)) * 180 / M_PI);

    line.setOrigin(1, 1);
    line.setPosition(x1, y1);
}

Line::Line(Point p1, Point p2){
    this->p1 = p1;
    this->p2 = p2;

    float x1 = p1.getPosX();
    float y1 = p1.getPosY();

    float x2 = p2.getPosX();
    float y2 = p2.getPosY();

    float dl = sqrt( pow(x1-x2, 2) + pow(y1-y2, 2));

    line.setSize(sf::Vector2f(dl, 2));
    if (x2==x1)
        line.rotate(90);
    else if (x2!=x1)
        line.rotate(atan((y2-y1)/(x2-x1)) * 180 / M_PI);

    line.setOrigin(1, 1);
    line.setPosition(x1, y1);
}

void Line::draw(sf::RenderWindow& window){
    window.draw(line);
}