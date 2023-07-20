#include <iostream>
using namespace std;

void bubbleSort(int nums[],int length){
    for(int i = 0; i < length; i++){
        for(int k = 0; k < i; k++){
            if(nums[k] > nums[k+1]){
                swap(nums[k],nums[k+1]);
            }
        }
    }
}



int linearSearch(int nums[],int length;int target){
    for(int i = length-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j],[j+1]);
            }
        }
    }
}



 int binarySearch(int nums[],int length,int t){
   int first = 0;
   int last = 0;
     while(first < last){
         int mid = (first + last) / 2;
         if(t < nums[mid]){
             last = mid;
         } else {
             first = last;
         }
     }
     return 0;
    
}


 
