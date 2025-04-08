/*
    LOOP
        LOOP FOR ADVANCED TRAININGS
*/
#include<iostream>
using namespace std;


int main(){
    int nums[] = {100,200,300,400,500,600};
    int numSize = sizeof(nums) / sizeof(nums[0]);

    for(int i = 0; i < numSize; i++) // or i+=2
    {
        cout<< nums [i]<< "\n";
        i++; // if u use i+=2 u should remove this line
    }// 100, 300, 500

    ///////////////////////////////////////////

    // for(int i =5; i > 1; i--) // or int i = (numSize-1)
    // {
    //     cout<< nums [i]<< "\n";

    // }// 600,500,400,300

//////////////////// another method for the same example

    int i =5;
    for(;;) 
    {  
        cout<< nums [i]<< "\n";
        i--;
        if ( i==1){
            break;
        }
    }// 600,500,400,300

    return 0;
}
