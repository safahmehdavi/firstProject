#include <iostream>
using namespace std;

int main(){
    int score = 0;
    char correctAnswer = 'B';
    char userInput;
    
    for(int i = 0; i < 3; i++){
        cout<<"Enter a letter:";
        cin>>userInput;
        
        
        if(userInput == correctAnswer){
            cout<<"congrats you have found the correct Answer"<<endl;
            score++;
            
            break;
        } else {
            cout<<"You have not found the correct Answer"<<endl;
            break;
        }
        cout<<"Your score is now " << score << endl;
        return 0;
    }
    
    
    
    
    
}
