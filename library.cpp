#include <iostream>
#include <string>


int main(){
   int HowManyBooks = 0;
   std::string name;
   int age;
   bool isThatCorrect;
   
   
   
   
   std::cout<<"Enter Your Name:"<<std::endl;
   std::cin>>name;
   std::cout<<"Enter Your Age"<<std::endl;
   std::cin>>age;
   std::cout<<"How many Books do you want to rent today"<<std::endl;
   std::cin>>HowManyBooks;
   
   
   
   
   if(HowManyBooks == 1){
       std::cout<<"You are only getting one book today correct? "<< name << endl;
       std::cin>>isThatCorrect;
   } else if(HowManyBooks >= 1){
       std::cout<<"You are getting more then one book today correct? "<< name << endl;
       std::cin>>isThatCorrect;
       std::cout<<"Ok you have rented this amount of books remember to bring them back or you will get charged for it"<<endl;
   } else if(HowManyBooks == 0){
       std::cout<<"Please Enjoy your stay and if you ask a question please don't hesitate k?"
       << name << endl;
   }
                                            

}
