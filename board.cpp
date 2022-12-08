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
    int i = 0;
    for(int x=0; x<4; x++){
        for(int y=0; y<4; y++){
            lines[i++] = Line(points[x][y], points[x+1][y]);
            lines[i++] = Line(points[x][y], points[x][y+1]);
            if ((x+y)%2 == 1)
                lines[i++] = Line(points[x][y+1], points[x+1][y]);
            else
                lines[i++] = Line(points[x][y], points[x+1][y+1]);
        }
    }
    for(int xy=0; xy<4; xy++){
        lines[i++] = Line(points[4][xy], points[4][xy+1]);
        lines[i++] = Line(points[xy][4], points[xy+1][4]);
    }
}

void Board::draw(sf::RenderWindow& window){
    for(int i=0; i<56; i++) lines[i].draw(window);

    for(int x=0; x<5; x++)
        for(int y=0; y<5; y++)
            points[x][y].draw(window);
}