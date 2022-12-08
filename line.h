#pragma once
#include <SFML/Graphics.hpp>
#include <math.h>
#include "point.h"
#define M_PI 3.14159265358979323846

class Line{
    Point p1;
    Point p2;
    sf::RectangleShape line;
public:
    Line();
    Line(Point p1, Point p2);
    void draw(sf::RenderWindow& window);
};