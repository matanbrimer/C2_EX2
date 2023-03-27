
#include "player.hpp"
#include <iostream>
using namespace std;

using namespace  ariel;



Player::Player(string _name):name(_name)
{
}

Player::Player(const Player& _player):Player(_player.name){

}
Player& Player::operator=(const Player& other)
{
    if (this != &other)
    {
        name = other.name;
    }
    return *this;
}
Player::Player(Player&& other)noexcept: name(other.name)
{
}

Player& Player::operator=(Player&& other)noexcept
{
    if (this != &other)
    {
        name = other.name;
    }
    return *this;
}
Player::~Player()
{
    cout<<"delete player: "<< name << endl;

}
int Player::stacksize(){
    return 26;
}

int Player::cardesTaken(){
    return 7;
}

void Player::setName(string n){
    this->name = n;
}

std::string Player::getName(){
    return name;
}



