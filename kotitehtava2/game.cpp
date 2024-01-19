#include "game.h"
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

Game::Game(int a): maxNumber(a) {

    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber <<" as a maximum value" <<endl;
}

Game::~Game() {cout << "GAME DESTRUCTROR: Object cleared from stack memory" <<endl;}

void Game::Play() {

   int min{1};

   numOfGuesses = 0;

   cout << "Give your guess between " << min <<"-" << maxNumber << endl;

   srand(time(NULL));


   randomNumber = rand() % maxNumber + min;

   do {

   cin >> playerGuess;

   numOfGuesses++;

   if (playerGuess < randomNumber)
   cout << "Your guess is too small" << endl;
   if (playerGuess > randomNumber)
   cout << "Your guess is too big" << endl;

   }while (playerGuess != randomNumber);

   cout << "Your guess is right = " << randomNumber << endl;

   printGameResult();

}

void Game::printGameResult() {



cout <<"You guessed the right answer = "<<randomNumber <<" with " << numOfGuesses <<" guesses" <<endl;

}
