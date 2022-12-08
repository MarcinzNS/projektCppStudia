#include "board.h"
#include "point.h"
#include "line.h"
#define WIN_WIDTH 500
#define WIN_HEIGHT 650

Board::Board(){
    for(int x=0; x<5; x++){
        for(int y=0; y<5; y++){
            points[x][y] = Point(
                100+((WIN_WIDTH-200)/4)*x,
                100+((WIN_WIDTH-200)/4)*y
                );
        }
    }
    lines = Line(points[0][0], points[0][1]);
}

void Board::draw(sf::RenderWindow& window){
    for(int x=0; x<5; x++){
        for(int y=0; y<5; y++){
            points[x][y].draw(window);
        }
    }
    lines.draw(window);
}