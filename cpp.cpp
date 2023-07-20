#include <iostream>
#include <vector>


int main(){
    
    std::vector<int> numbers;

    numbers.push_back(0);
    numbers.push_back(5);
    numbers.push_back(10);
    numbers.push_back(15);
    numbers.push_back(20);
    numbers.push_back(25);
    numbers.push_back(30);
    numbers.push_back(35);
    numbers.push_back(40);
    numbers.push_back(45);
    numbers.push_back(50);
    numbers.push_back(55);
    numbers.push_back(60);
    numbers.push_back(65);
    numbers.push_back(70);
    numbers.pop();
    numbers.pop();
    numbers.pop();
    numbers.pop();
    numbers.pop();
    
    for(int i = 0; i < numbers.size();i++){
        std::cout<<numbers[i]<<"";
    }
   
    
    
    
}
