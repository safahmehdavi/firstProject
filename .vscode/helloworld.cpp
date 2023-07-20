#include <iostream>
using namespace std;

int main(){
    const int SIZE = 5;
    int array[SIZE] = {};
    int userGuess;
    int score;
    int correctAnswer = 5;



   cout<<"First step fill in the array"<<endl;
   cin>>userGuess;
   for(int i = 0; i < SIZE;i++){
       if(userGuess == correctAnswer){
          score++;
          cout<<"You get one point"<<endl;
       } else if(userGuess != correctAnswer){
          cout<<"You get no points";
       }
   }





}