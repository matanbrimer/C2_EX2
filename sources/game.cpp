
#include <iostream>
#include "player.hpp"
#include "game.hpp"
#include "card.hpp"

using namespace std;

using namespace  ariel;

Game::Game(Player &pl1,Player &pl2):player1(pl1),player2(pl2)
{
    namewinner=' ';
}
Game::Game(const Game& _game):player1(_game.player1),player2(_game.player2){
    namewinner=' ';
}

Game &Game:: operator=(const Game& other){
    if(this != &other){
        player1 = other.player1;
        player2 = other.player2;
    }
    return *this;
}

Game &Game:: operator=(Game&& other)noexcept{
    if(this != &other){
        player1 = other.player1;
        player2 = other.player2;
    }
    return *this;
}
Game::Game(Game&& other)noexcept:player1(other.player1),player2(other.player2) {
     
}
Game::~Game()
{
     cout<<"this game delete"<< endl;

}

void Game:: playAll(){
    cout<< "playAll"<<endl;
}
void Game::printWiner(){
    cout<< "printWiner"<<endl;
}
void Game::printLog(){
    cout<< "printLog"<<endl;
}
void Game::printStats(){
    cout<< "printStats"<<endl;
}
void Game::playTurn(){
    cout<< "playTurn"<<endl;
}
void Game::printLastTurn(){
    cout<< "printLastTurn"<<endl;
}
void Game:: creatDeck(){
     
  

        
}

void Game:: shuffleDeck(){

}
vector<card> Game:: getDeck()
{
    return Deck;
}

void Game:: setNameWinner(string _name){
    namewinner = _name;
}
string Game:: getNameWinner(){
    return namewinner;
}
