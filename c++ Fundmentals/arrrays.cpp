/*
    Arrays
      -useful methods 
        at
        front
        back
        fill
        size 
        empty
*/  
#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int ,4> nums = {100, 200, 300, 400};
    cout << nums[0] << endl;
    cout << nums.front() << endl;
    
    cout << nums[3] << endl;
    cout << nums.back() << endl;
    
    cout << nums[1] << endl;
    cout << nums.at(1) << endl; // number of element (at) index 1 = 200
    
    cout << nums.size() << endl; //4
    
    cout << nums.empty() << endl; // is it empty?? 0 == false

    return 0;
}