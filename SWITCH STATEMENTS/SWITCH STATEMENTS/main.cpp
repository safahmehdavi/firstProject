//
//  main.cpp
//  SWITCH STATEMENTS
//
//  Created by Safah Mehdavi on 7/11/23.
//

#include <iostream>

int main(){
    int bankAccount = 0;
    
    
    std::cout<<"This is your bank account now please a number: "<<std::endl;
    std::cin>>bankAccount;
    
    
    switch(bankAccount){
        default:
            std::cout<<"You're not rich"<<std::endl;
            break;
            
        case 1000000:
            std::cout<<"not a multimillionaire yet, but still richer then most"<<std::endl;
            break;
        case 10000000:
            std::cout<<"You're a multimillionaire but not that rich"<<std::endl;
            break;
        case 100000000:
            std::cout<<"You're not a billionaire yet but you are extremely wealthy: "<<std::endl;
            break;
        case 1000000000:
            std::cout<<"You're a billionaire."<<std::endl;
            break;
    };


    
    
    
    
}
