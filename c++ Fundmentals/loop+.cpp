/*
    loop
        loop for Advanced Syntax 

    syntax
    for(init, condition, update){
        // block of code
    }
*/

#include<iostream>
using namespace std;

int main(){
   int nums[] = {100,200,300,400,500,600};
   int numsCount = sizeof(nums) / sizeof(nums[0]); // 6

    // for(int i = 0; i < numsCount; i++)
    // {
    //     cout << nums[i] << "\n"; // 100 ,200,300,400,500,600
    // }

    // for(int i = 2; i < 5; i++)
    //     cout << nums[i] << "\n"; // 300, 400, 500

    //////////////////another way to write it
    // int i=0;
    // for (;;){
    //     cout << nums[i] << '\n';
    //     i++;
    //     if (i==numsCount){
    //         break;
    //     }
    // }

////////////////////////// ANOTHER WAY TO WRITE THE EXAMPLE 
    int i=2;
    for (;;){
        cout << nums[i] << '\n';
        i++;
        if (i==5){
            break;
        }
    }
    
    return 0;
}