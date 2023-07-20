//
//  main.cpp
//  C++
//
//  Created by Safah Mehdavi on 7/13/23.
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
            std::cout<<"Stack Overflow! Cannot Push."<<std::endl;
        }
        arr[++top] = element;
        
    }
    
    
    void pop(){
        if(isItEmpty()){
            std::cout<<"Stack Underflow! Cannot Pop."<<std::endl;
        }
        --top;
    }
    
    
    int peek(){
        if(isItEmpty()){
            std::cout<<"Empty Stack"<<std::endl;
        }
        return arr[top];
    }
    

    int Size(){
        return top + 1;
    }
    
    
};


int main(){
    
    Stack myStack;
    
    myStack.push(7);
    myStack.push(8);
    myStack.push(9);
    myStack.push(10);
    myStack.push(11);
    myStack.push(12);
    
    std::cout<<"Stack Size"<<myStack.Size()<<std::endl;
    std::cout<<"Stack Peek"<<myStack.peek()<<std::endl;
    
    
}
