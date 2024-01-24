#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Game::Game(int maxNum) {

    maxNumber = maxNum;
    cout << "GAME CONSTRUCKTOR: object initialized with " << maxNumber << " as a maximum value" << endl;
    srand(time(NULL));
    randomNumber = rand() % maxNumber + 1;
}

void Game::play(){

    for(; ; numOfGuesses++){


        //cout<< randomNumber << endl;     //Arvauspelin Voitto luku
        cout << "Give your guess between 1-" << maxNumber << endl;
        cout << "\tArvauskerta " << numOfGuesses + 1 << ": ";
        cin >> playerGuess;


        if(playerGuess == randomNumber ){
            cout << "Oikein arvattu!\n" << endl;
            printGameResult();
            break;
        }
        else if (playerGuess < randomNumber){
            cout << "Annoit luvun " << playerGuess << ", voitto luku on suurempi. Arvaa uudelleen \n" << endl;
        }
        else if (playerGuess > randomNumber){
            cout << "Annoit luvun " << playerGuess << ", voitto luku on pienempi. Arvaa uudelleen \n" << endl;
        }
    }
}

void Game::printGameResult(){
        cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses + 1
         << " guesses." << endl;
}

Game::~Game() {
    cout << "GAME DESTRUCKTOR: object cleared from stack memory" << endl;
}
