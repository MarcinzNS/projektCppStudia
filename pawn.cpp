#include "pawn.h"
#define RPAWN 32
#define WIN_WIDTH 500
#define WIN_HEIGHT 650

Pawn::Pawn(int x, int y){
    X = x;
    Y = Y;
    shapeBorder.setRadius(RPAWN);
    shapeBorder.setOrigin(RPAWN, RPAWN);
    shapeBorder.setFillColor(sf::Color(100, 100, 120));

    shape.setRadius(RPAWN-10);
    shape.setOrigin(RPAWN-10, RPAWN-10);
    shape.setFillColor(sf::Color(255, 255, 255, 100));
}

int Pawn::getPosX() const { return 100+((WIN_WIDTH-200)/4)*X; }
int Pawn::getPosY() const { return 100+((WIN_WIDTH-200)/4)*Y; }

void Pawn::setColorBorder(int r, int g, int b){
    colorBorder = sf::Color(r, g, b);
    shapeBorder.setFillColor(colorBorder);
}
void Pawn::setCord(int x, int y){
    X = x;
    Y = y;
    shapeBorder.setPosition(getPosX(), getPosY());
    shape.setPosition(getPosX(), getPosY());
}

void Pawn::draw(sf::RenderWindow& window){
    window.draw(shapeBorder);
    window.draw(shape);
}