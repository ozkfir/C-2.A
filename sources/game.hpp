#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "player.hpp"
#include "card.hpp"
using namespace std;
namespace ariel{}
#ifndef GAME_H
#define GAME_H
#include "player.hpp"

class Game {
    Player & player_1;
    Player & player_2;
public:
Game(Player &a,Player &b);
void playTurn();
void printLastTurn();
void playAll(); 
void printWiner();
void printLog(); 
void printStats();
};
#endif
