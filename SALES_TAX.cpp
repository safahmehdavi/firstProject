#include <iostream>
using namespace std;


int main(){
    const double SALES_TAX = 0.0725;
    int productPrice;
    int total;
   
   
cout<<"Enter the Products Price and I will give you the total"<<endl;
cin>>productPrice;


if(productPrice >= 0){
    total = SALES_TAX * productPrice;
    cout<<"Here is the sales tax: "<< product + total; 
} else {
    cout<<"Enter a valid price."<<endl;
}
  }
