/*
    Arrays
        what is array?
            callection of elements of the same type 
            placed in contiguous memory locations
            referenced by index started from 0
        why we need arrays?
        creating array syntax
        check array size 
        create array without size
*/  
#include <iostream>
using namespace std;

int main(){
    int nums [4]= {100, 200, 300, 400};
    cout<< sizeof(int) <<"\n";//4 Bytes
    cout<< sizeof(nums) <<"\n";//16 Bytes

    double dous [4]= {100, 200, 300, 400};
    cout<< sizeof(double) <<"\n";//8 Bytes
    cout<< sizeof(dous) <<"\n";//32 Bytes

    int rands []{10, 2500, 980, 77777};// another syntax




    return 0;
}