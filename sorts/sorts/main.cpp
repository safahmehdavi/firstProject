//
//  main.cpp
//  sorts
//
//  Created by Safah Mehdavi on 7/8/23.
//

#include <iostream>
using namespace std;

int linearSearch(int nums[],int length,int t){
    for(int i = 0; i < length; i++){
        while(nums[i] == t){
            return i;
        }
    }
    return -1;
}


void bubbleSort(int nums[],int length){
    for(int i = length-1; i > length; i--){
        for(int x =0; x < i; x++){
            if(nums[x+1] < nums[x]){
                //swap(x,x+1);
            }
        }
        
    }
}


int binarySearch(int nums[],int length,int t){
    int first = 0; int last = length-1;
    if(first < last){
        int mid = (first + last) / 2;
        if(t <= nums[mid]){
            last = mid;
        } else {
            first = mid + 1;
        }
        if(nums[first] == mid){
            return first;
        }
    }
    return -1;
}
