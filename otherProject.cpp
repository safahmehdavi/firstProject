//
//  main.cpp
//  BackSavefor Game
//
//  Created by Safah Mehdavi on 6/14/23.
//



#include <iostream>
#include <string>
using namespace std;


int main(){
    int userInput;
    int score = 0;
    int correctAnswer = 4;
    bool doesItEqual = false;

    
    cout<<"Enter a random number and if you enter the correct number";
    cin>>userInput;
    
    
    
   for(int i = 0; i < 2; i++){
        doesItEqual = true;
        if(userInput == correctAnswer){
            cout<<"You got the correct Answer"<<endl;
            score++;
            cout<<"heres your score "<<score <<endl;
            break;
        } else {
            cout<<"You Need to try again."<<endl;
            break;
        }
        
   }
        
        
        
        
        
   }
    
