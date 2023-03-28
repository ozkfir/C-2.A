#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "game.hpp"
using namespace std;

Game::Game(Player p1,Player p2){
    this->player_1=p1;
    this->player_2=p2;
}
void Game::playTurn(){}
void Game::printLastTurn(){}
void Game::playAll(){}
void Game::printWiner(){}
void Game::printLog(){}
void Game::printStats(){}

