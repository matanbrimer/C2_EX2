
#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include <iostream>
#include "card.hpp"
using namespace std;
namespace  ariel{


class Player
{
private:
  string name;
  vector<card> deckPlay, deckEarn;
  
public:
    //constructor 
    Player(std::string _name);
    
    //Copy Constructor
    Player(const Player& _player);
    
    //Move Constructor
    Player(Player&& other) noexcept;
    
    //copy assignment operator
    Player& operator=(const Player& other);
    
    //move assignment operator
    Player& operator=(Player&& other) noexcept;

    ~Player();
    int  stacksize();
    int cardesTaken();
    void setName(string n);
    string getName();
};

}
#endif