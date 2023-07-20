//
//  main.cpp
//  open and close
//
//  Created by Safah Mehdavi on 7/8/23.
//
#include <fstream>
#include <iostream>

int main(){
    std::ofstream myFile;
    myFile.open("Hi.txt.rtf");
    std::cout<<"Hello There.\n"<<std::endl;
    myFile.close();
    

}
