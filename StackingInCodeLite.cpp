#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

class Stack{
private:
 int arr[MAX_SIZE];
 int top;
public Stack(){
    top = -1;
}

bool isEmpty(){
  return top == -1;
}


void push(int element){
    if(top == MAX_SIZE-1){
        cout<<"Stack Overflow cannot Push"<<endl;
    }
     return arr[++top] = element;
}
 
void pop(){
    if(isEmpty()){
        cout<<"Stack Underflow! cannot pop"<<endl;
    }
  --top;
} 
 
 int peek(){
     if(isEmpty()){
         cout<<"Empty Stack"<<endl;

     }
     return arr[top];
     
 }
 
 
}




