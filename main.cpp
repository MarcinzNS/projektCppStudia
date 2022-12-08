#include <SFML/Graphics.hpp>
#include "board.h"
#define WIN_WIDTH 500
#define WIN_HEIGHT 650

int main()
{
    sf::RenderWindow window;
    window.create(sf::VideoMode(WIN_WIDTH, WIN_HEIGHT, 32), "MBI trainer");
    
    Board board;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear( sf::Color( 20, 20, 50 ) );
        board.draw(window);
        window.display();
    }
    return 0;
}
