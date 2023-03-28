#include "doctest.h"
#include <stdexcept>
#include "sources/player.hpp"
#include "sources/game.hpp"
#include <iostream>

//
//DECK_SIZE=52;
//PLAYER_STARTING=26;
//EMPTY=0;
//using namespace ariel;
//using namespace std;


TEST_CASE("for each turn the number of cards in the stack decreases") {
    Player p1("A");
    Player p2("B");
//    Game game(p1, p2);
    int temp = 26;
    for (int i = 0; 0 < p1.stacksize() && i < 7; i++) {
        game.playTurn();
        CHECK(p1.stacksize() < temp);
        temp = p1.stacksize();
    }
}

    TEST_CASE("At the end of the game both stack will be empty and all the cards will be Taken"){
        Player p1("A");
        Player p2("B");
        Game game(p1,p2);
        game.playAll();
        CHECK(p1.stacksize()==0);
        CHECK(p2.stacksize()==0);
        CHECK(p2.cardesTaken()+p1.cardesTaken()==52);
    }

    TEST_CASE("Checks that the constructor has initialized well"){
        Player p1("A");
        Player p2("B");
        Game game(p1, p2);
        CHECK(p2.stacksize() == 26);
        CHECK(p1.stacksize() == 26);
        CHECK(p2.cardesTaken() == 0);
        CHECK(p1.cardesTaken() == 0);
    }

    TEST_CASE("The number of cards in one player's stack is always equal to the number of cards in the other player's stack"){
        for (int i=0; 0<p1.stacksize() && i<7;i++){
            game.playTurn();
            CHECK(p1.stacksize()==p2.stacksize());
        }

    }
    TEST_CASE("At all times there are 52 cards in the game"){
        for (int i=0; 0<p1.stacksize() && i<7;i++){
            game.playTurn();
            CHECK(p1.stacksize()+p2.stacksize()+p2.cardesTaken()+p1.cardesTaken()==52);
        }
    }



TEST_CASE("A player cannot play two games"){
    Player p1("a");
    Player p2("b");
    Player p3("c");
    CHECK_NOTHROW(Game game1(p1, p2));
    CHECK_THROWS(Game game1(p1, p3));

}

    TEST_CASE("A player cannot play against himself"){
        Player p1("a");
        CHECK_THROWS(Game game(p1, p1));
    }


    TEST_CASE("You can't play after the cartridges are empty"){
        Player p1("A");
        Player p2("B");
        Game game(p1,p2);
        game.playAll();
        CHECK_THROWS(game.playTurn());
        CHECK_THROWS(game.playAll());
    }



