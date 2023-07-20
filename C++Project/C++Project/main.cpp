//
//  main.cpp
//  C++Project
//
//  Created by Safah Mehdavi on 7/18/23.
//

#include <iostream>
#include <string>



struct Person{
public:
    std::string name;
    int age;
private:
    std::string DOB;
    std::string Address;

};





const int MAX_SIZE = 100;

class Stack{
private:
    int arr[MAX_SIZE];
    int top;
public:
    Stack(){
        top = -1;
    }
    
    int isItEmpty(){
        return top == -1;
    }
    
    
    void push(int element){
        if(top == MAX_SIZE-1){
            std::cout<<"Stack Oveflow! cannot push."<<std::endl;
        }
        arr[++top] = element;
    }
    
    
    void pop(){
        if(isItEmpty()){
            std::cout<<"Stack Undeflow cannot pop."<<std::endl;
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
    myStack.push(25);
    myStack.push(30);

    
    std::cout<<"Stack Size: " << myStack.size() << std::endl;
    std::cout<<"Stack Peek: " << myStack.peek() << std::endl;
    
    Person person;
    person.name = "Safah";
    person.age = 21;
    
    std::cout<<person.name<<std::endl;
    std::cout<<person.age<<std::endl;
}

