#include <iostream>
using namespace std;

int main(){
int *pointer = new int;
*pointer = 44;


cout<< *pointer << endl;

delete pointer;




}
