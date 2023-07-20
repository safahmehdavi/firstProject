
#include <iostream>
#include <vector>


int main(){
    std::vector<int> numbers;
    
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(6);
    numbers.push_back(7);
    numbers.push_back(8);
    numbers.push_back(9);
    numbers.push_back(10);
    numbers.push_back(11);
    
    for(int i = 0; i < numbers.size(); i++){
        std::cout<<numbers[i];
    }
    
    for(int x = 0; x < 1600; x++){
        std::cout<<numbers[x];
    }
    
    
    
    
    
    
}
