//
//  h.cpp
//  working_game
//
//  Created by Safah Mehdavi on 6/23/23.
//

#include <iostream>
#include <string>


int main() {
    string name;
    int Age;
    int userInput;
    int score = 0;
    int correctAnswer = 200;
    bool doesItEqual = false;
    bool playAgain = false;

    std::cout << "Let's play a game." <<std::endl;
    std::cout << "But first, I want to know your name: ";
    std::cin >> name;
    std::cout << "Okay, your name is " << name <<std::endl;
    std::cout << "I want to know your age: ";
    std::cin >> Age;
    std::out << "Ok, your age is " << Age << std::endl;

    std::cout << "Now, " << name << ", let's play." <<std::endl;
    std::cout << "The rules of this game are simple." <<std::endl;
    std::cout << "You have to guess the correct number." <<std::endl;
    std::cout << "If you have the correct answer, you win a point."<<std::endl;

    std::cout << "Now guess a number, " << name << ". Good luck!" <<std::endl;

    do {
        cin >> userInput;
        if (userInput == correctAnswer) {
            doesItEqual = true;
            score++;
            std::cout << "WOOOOO! YOU GOT THE ANSWER!" <<std::endl;
            std::cout << "Score: " << score << std::endl;
            std::cout << "Do you want to play again? (1 for Yes, 0 for No): ";
            std::cin >> playAgain;
            if (playAgain) {
                score = 0;
                std::cout << "Let's play again." <<std::endl;
            } else {
                std::cout << "Thank you for playing. Try again next time!" <<std::endl;
            }
        } else {
            std::cout << "Incorrect answer." <<std::endl;
            playAgain = false;  // Set playAgain to false to exit the loop
        }
    } while (playAgain);

    return 0;
}
