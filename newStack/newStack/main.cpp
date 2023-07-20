//
//  main.cpp
//  newStack
//
//  Created by Safah Mehdavi on 7/7/23.
//

#include <iostream>
const int MAX_SIZE = 100;


class Stack{
private:
    int arr[MAX_SIZE];
    int top;
public:
    Stack(){
        top = -1;
    }
    
    bool isItEmpty(){
        return top == -1;
    }
    
    void push(int element){
        if(top == MAX_SIZE-1){
            std::cout<<"Stack Overflow! cannot push";
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
            std::cout<<"Empty Stack";
        }
        return arr[top];
    }
    
    int size(){
        return top + 1;
    }
    
};


int main(){
     //This is how a stack works.
    Stack myStack;
    
    myStack.push(5);
    myStack.push(10);
    myStack.push(15);
    myStack.push(20);
    myStack.push(25);
    myStack.push(30);
    myStack.push(35);
    
    std::cout<<"Stack SIZE: "<<myStack.size()<<std::endl;
    std::cout<<"Stack Peek: "<<myStack.peek()<<std::endl;
    
    
    
}
