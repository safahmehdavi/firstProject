#include <iostream>



int main(){
   int weight = 0;
   bool didYouLoseWeight = false;


  cout<<"Enter Your weight"<<endl;
  cin>>weight;


  if(weight < 170){
     didYouLoseWeight = true;
     std::cout<<"Congrats You have lost weight"<<std::endl;
  } else {
     std::cout<<"You need to go to the gym."<<std::endl;
  }
