//
//  main.cpp
//  Billing
//
//  Created by Safah Mehdavi on 7/7/23.
//

#include <iostream>
#include <string>


struct Billing{
    std::string firstName;
    std::string lastName;
    std::string Address;
    int zipCode = 0;
    int creditCardNum = 0;
};

 
struct shippingAddress{
     std::string homeAddressForProduct;
};





int main(){
    bool creditCard = false;
    Billing billing;
    shippingAddress ship;
    
    std::string product = "";
    int price;
    const double SALES_TAX = 0.0725;
    int total;
    
    std::cout<<"Enter the name of the Product: "<<std::endl;
    std::cin>>product;
    
    std::cout<<"Enter the price of the Product: "<<std::endl;
    std::cin>>price;
    
    if(price >= 0){
        total = price * SALES_TAX;
        std::cout<<"The total price will be: " << total + price << std::endl;
    } else if(price <= 0) {
        std::cout<<"Enter a valid Price"<<std::endl;
    }
       
        std::cout<<"Now Enter your credit card number: "<<std::endl;
        std::cin>>billing.creditCardNum;
    
    
    
        std::cout<<"Now Enter your billing Address: "<<std::endl;
        std::cin>>billing.Address;
    
     
   
    
        std::cout<<"Now Enter your Shipping Address: "<<std::endl;
        std::cin>>ship.homeAddressForProduct;
    
        
        
        std::cout<<"Order Processing..."<<std::endl;
}
    

    
    
    



    
    
