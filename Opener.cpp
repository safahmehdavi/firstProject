#include <iostream>
#include <fstream>
using namespace std;


int main(){
  ofstream myfile;
  myfile.open("randoTEXTFILE.txt");
  cout<<"Adding more words into this txt"<<endl;
  myfile.close();
  return 0;
}

