/*
    Pointers
        --  pointing to array

*/
#include<iostream>
using namespace std;

int main()
{
    int nums[]{10 ,20 ,30 ,40};
    int* ptr = &nums[0];
    
    //short int nums[]{10 ,20 ,30 ,40};
    //short int* ptr = &nums[0]; // the address will be 2MB instead of 4MB

    cout << "first element\n\n";

    cout << "value with index " << nums[0] << "\n";
    cout << "value with pointer " << *ptr << "\n";
    cout << "address with index " << &nums[0] << "\n";
    cout << "adress with pointer " << ptr << "\n";
    
    cout << "SECOND element\n\n";

    cout << "value with index " << nums[1] << "\n";
    cout << "value with pointer " << *(ptr + 1) << "\n";//  ( ptr + 1) because ptr is an integer   
    cout << "address with index " << &nums[1] << "\n";
    cout << "adress with pointer " << ptr + 1 << "\n";

    cout << "THIRD element\n\n";

    cout << "value with index " << nums[2] << "\n";
    cout << "value with pointer " << *(ptr + 2) << "\n";//  ( ptr + 1) because ptr is an integer   
    cout << "address with index " << &nums[2] << "\n";
    cout << "adress with pointer " << ptr + 2 << "\n";
    
    return 0;
}