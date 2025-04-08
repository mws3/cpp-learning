/*
    Arrays
      declare empty array
      add array element
      edit array element
      get length of array with sizeof
*/  
#include <iostream>
using namespace std;

int main(){
    int nums[4]; // making an array ith 4 elements
    nums[3] = 400; // last element in the array 
    nums[2] = 300; // 3rd element in the array 
    nums[0] = 200; // 1st element in the array 
    nums[1] = 100; // 2nd element in the array 

    cout <<"element 1: "<< nums[0] <<endl;
    cout <<"element 2: "<< nums[1] <<endl;
    cout <<"element 3: "<< nums[2] <<endl;
    cout <<"element 4: "<< nums[3] <<endl;

    int anums[] = {100, 200, 300, 400, 500, 600}; //    24 / 4 = 6
    cout <<"Array elements count is "<< sizeof (anums) / sizeof (anums[0]); 




    return 0;
}