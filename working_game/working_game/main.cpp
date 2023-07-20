//
//  main.cpp
//  working_game
//
//  Created by Safah Mehdavi on 6/23/23.
//
#include <iostream>
#include <string>
using namespace std;


int main(){
    
    string name;
    int Age;
    int userInput;
    int score = 0;
    int correctAnswer = 200;
    bool doesItEqual = false;
    bool playAgain = false;
    
    
    cout<<"lets play a game."<<endl;
    cout<<"But first I want to know your name..."<<endl;
    cin>>name;
    cout<<"Okay your name is "<<name<<endl;
    cout<<"I want to know your age:"<<endl;
    cin>>Age;
    cout<<"Ok your age is "<<Age<<endl;
    
    
    cout<<"Now "<< name <<" lets play;";
    cout<<"Now the rules of this game is simple..."<<endl;
    cout<<"You have to guess the correct Number..."<<endl;
    cout<<"If you have the correct answer...You win a point"<<endl;
    
    
    cout<<"Now guess a number "<< name <<" and Good Luck"<<endl;
    
    
    for(int i = 0; i < 10; i++){
        cin>>userInput;
        if(userInput == correctAnswer){
            doesItEqual = true;
            score++;
            cout<<"WOOOOO YOU GOT THE ANSWER"<<endl;
            cout<<score;
        } else{
            cout<<"Do You want to play again?"<<endl;
            cin>>playAgain;
            if(playAgain){
                score = 0;
                cout<<"Let's play again. "<<endl;
            } else {
                cout<<"Incorrect Answer."<<endl;
                playAgain = false;
            }
        }
      }
        
    }
