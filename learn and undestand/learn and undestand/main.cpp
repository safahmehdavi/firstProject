//
//  main.cpp
//  learn and undestand
//
//  Created by Safah Mehdavi on 7/11/23.
//

#include <iostream>
#include <string>

int main(){
    int userInput = 0;
    int correctAnswer = 5;
    int score = 0;
    std::string yesOrNo;
    
    std::cout<<"Hi do you want to play a game? " << std::endl;
    std::cin>>yesOrNo;
    
    
    if(yesOrNo == "Yes"){
        
        std::cout<<"The game is a random guessing game, now enter a random number "<<std::endl;
        std::cin>>userInput;
        
        if(userInput == correctAnswer){
            std::cout<<"Correct "<<std::endl;
            score++;
            std::cout<<"we will show your score "<< score << std::endl;
        } else if(userInput != correctAnswer) {
            std::cout<<"Keep trying "<<std::endl;
        }
    } else if(yesOrNo == "No"){
        std::cout<<"Well then cya :)"<<std::endl;
    }
    

    

    
    

    
    
    
    
}

