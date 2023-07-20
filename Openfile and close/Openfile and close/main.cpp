//
//  main.cpp
//  Openfile and close
//
//  Created by Safah Mehdavi on 7/4/23.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream myFile;
    myFile.open("Thix.txt");
    cout<<"Writing in this file"<<endl;
    myFile.close();
}

