int main(){
      int userScore = 0;
      int input;
      int correctAnswer = 5;
      
      
      
      cout<<"Enter a random number"<<endl;
      
      for(int i = 0; i < 4; i++){
      cin>>input;
          
          if(input == correctAnswer){
              cout<<"Congrats you win"<<endl;
              userScore++;
          } else {
              cout<<"You lose"<<endl;
          }
          
          
          
      }
      
      
      
}
