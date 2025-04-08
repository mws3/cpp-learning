/*
    loop
        loop with for 
        loop on array 

    syntax
    for(init, condition, update){
        // block of code
    }
*/

#include<iostream>
using namespace std;

int main(){
    // int num =0;
    // num++;    
    // cout << num <<"\n"; //1
    // num++;    
    // cout << num <<"\n"; //2
    // num++;    
    // cout << num <<"\n"; //3
    // num++;    
    // cout << num <<"\n"; //4
    // num++;    
    // cout << num <<"\n"; //5

    ///////////// OF COURSE THAT IS NOT AN EFFICIENT WAY TO DO IT
    for (int i = 0; i < 6; i++) 
    {
        cout << i <<"\n"; //
    }
  ///////////////// example 
    int nums[4]= {100,200,300,400};
    cout << nums[0] << "\n";
    cout << nums[1] << "\n";
    cout << nums[2] << "\n";
    cout << nums[3] << "\n";
////////////////// by using the for loop
    for(int index=0; index < 4; index++)
    {
        cout << nums[index] << "\n";
    }




    return 0;
}