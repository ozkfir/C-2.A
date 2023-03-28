#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "card.hpp"
#ifndef PLAYER_H
#define PLAYER_H
#include <string>

namespace ariel{}

class Player{
    std::string name;
public:
Player(std::string name);
int stacksize();
int cardesTaken();
};
#endif
