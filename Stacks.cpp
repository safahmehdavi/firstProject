#include <iostream>
using namespace std;

const int MAX_SIZE = 100;


class Stack{
   private:
    int arr[MAX_SIZE];
    int top;
public:
    stack(){
        top =-1;
    }

    bool isEmpty(){
        return top == -1;
    }  

   void push(int element){
    if(top == MAX_SIZE-1){
        cout<<"Stack Overflow! Cannot push element" << element << endl;
        return;
    }
     arr[++top] = element;
   }

   void pop(){
    if(isEmpty()){
        cout<<"Stack Underflow! Cannot pop from an empty stack"<< element << endl;
    }
   }

int peak(){
    if(isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    return arr[top];
}
   
 
int size(){
    return top + 1;
}


};

int main(){
    Stack myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);




    
}