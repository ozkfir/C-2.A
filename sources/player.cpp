#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "player.hpp"
using namespace std;


Player::Player(string name){
    this->name=name;
}
int Player::stacksize(){
    return 0;
}
int Player::cardesTaken(){
    return 0;
}
