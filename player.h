#pragma once
#include <SFML/Graphics.hpp>
#include "pawn.h"

class Player:public Pawn{
    bool click;
public:
    Player();
};