#ifndef GAME_H
#define GAME_H
#include <vector>
 
#include "player.hpp"
#include "card.hpp"
using namespace std;
namespace ariel{

class Game
{
    
private:
    Player &player1, &player2;
    vector<card> Deck;
    string namewinner;
public:

    //constructor
    Game(Player& pl1, Player& pl2);

    //Copy Constructor
    Game(const Game&);

    //Move Constructor
    Game(Game&& other)noexcept;

    //copy assignment operator
    Game& operator=(const Game& other) ; 

    //move assignment operator
    Game& operator=(Game&& other)noexcept; // Define move assignment operator
    ~Game();
  
    
    void playAll();
    void printWiner(); 
    void printLog();
    void printStats();
    void playTurn();
    void printLastTurn();
    void creatDeck();
    void shuffleDeck();
    vector<card> getDeck();
    void setNameWinner(string _name);
    string getNameWinner();
};






} 
#endif