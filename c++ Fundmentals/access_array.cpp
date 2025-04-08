/*
    Arrays
      access array elements
      check element location
*/  
#include <iostream>
using namespace std;

int main(){
    int nums[]{100, 200, 300};
    
    cout<< "first element: " << nums[0] <<"\n";
    cout<< "LAST element: " << nums[2] <<"\n";// last element 

    cout<< "LOCATION: " << &nums[0] <<"\n";
    cout<< "LOCATION: " << &nums[1] <<"\n";
    cout<< "LOCATION: " << &nums[2] <<"\n";

    return 0;
}