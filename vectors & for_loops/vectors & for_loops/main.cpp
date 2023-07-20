//
//  main.cpp
//  vectors & for_loops
//
//  Created by Safah Mehdavi on 6/22/23.
//
#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int>numbers;
    
    for(int x = 0; x < 1200;x++){
        numbers.push_back(x);
        cout<< x << " " <<endl;
    }
    
    
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
    numbers.push_back(75);
    numbers.push_back(80);
    numbers.push_back(85);
    numbers.push_back(90);
    numbers.push_back(95);
    
    numbers.push_back(100);
    numbers.push_back(105);
    numbers.push_back(110);
    numbers.push_back(115);
    numbers.push_back(120);
    numbers.push_back(125);
    numbers.push_back(130);
    numbers.push_back(135);
    numbers.push_back(140);
    numbers.push_back(145);
    numbers.push_back(150);
    numbers.pop_back();
    numbers.pop_back();
    numbers.pop_back();
    
    
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << "" << endl;
    }
    

}
 
