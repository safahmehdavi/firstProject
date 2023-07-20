//
//  main.cpp
//  stackers
//
//  Created by Safah Mehdavi on 7/11/23.
//
#include <iostream>
const int MAX = 100;

class Stack{
private:
    int arr[MAX];
    int top;
public:
    Stack(){
        top = -1;
    }
     
    bool isItEmpty(){
        return top == -1;
    }
    
    void push(int element){
        if(top == MAX-1){
            std::cout<<"Stack Overflow! cannot push "<<std::endl;
        }
        arr[++top] = element;
    }
    
    void pop(){
        if(isItEmpty()){
            std::cout<<"Stack Underflow! cannot pop"<<std::endl;
        }
        --top;
    }
  
    int peek(){
        if(isItEmpty()){
            std::cout<<"Empty Stack"<<std::endl;
        }
        return arr[top];
    }
    
    int size(){
        return top + 1;
    }
    
};



int main(){
    Stack myStack;
    
    
    myStack.push(5);
    myStack.push(10);
    myStack.push(15);
    myStack.push(20);
    std::cout<<"Stack Size: "<<myStack.size()<<std::endl;
    std::cout<<"Stack Peek: "<<myStack.peek()<<std::endl;
    
    
    
    
    
    
    
}
