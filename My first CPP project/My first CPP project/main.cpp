//
//  main.cpp
//  My first CPP project
//
//  Created by Safah Mehdavi on 7/5/23.
//

#include <iostream>

using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> rows;
    
    //post fix operator x++;
    //prefix operator ++x;
    //does the same thing expect x++ keeps the same value, while updating it on the next line.
    
    for(int i = 1; i <= rows; ++i){
        for(int x = 1; x <= i; ++x){
            cout<<"🍕";
            cout<<"🌭";
            cout<<"🍔";
            cout<<"🍏";
             

            
        }
        cout<<endl;
    }

    return 0;
}
