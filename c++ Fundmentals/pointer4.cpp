/*
    Pointers
        pointer arithmetic
        pointer and array
*/

#include <iostream>
using namespace std;

int main()
{
    int nums[]{10,20,30,40,50}; 
    // cout << nums << "\n";   //1ST ELEMENT => MEMORY ADDRESS
    // cout << &nums[0] << "\n";//1ST ELEMENT => MEMORY ADDRESS

    // cout << nums[0] << "\n"; // 1ST ELEMENT => 10
    // cout << *nums << "\n";   // 1ST ELEMENT => 10
    
    // cout << nums[1] << "\n"; // 2nd ELEMENT => 20
    // cout << *(nums + 1) << "\n";   // 2nd ELEMENT => 20

    int *ptr = nums;

    cout << ptr << "\n"; // 1ST ELEMENT => memory address
    cout << *ptr << "\n";   // 1ST ELEMENT => 10
    
    ptr++;
    
    cout << ptr << "\n"; // 2nd ELEMENT => memory address
    cout << *ptr << "\n";   // 2nd   ELEMENT => 20

    ptr += 3;
    
    cout << ptr << "\n"; // last ELEMENT => memory address
    cout << *ptr << "\n";   // last   ELEMENT => 50

    ptr --;
    
    cout << ptr << "\n"; // before last ELEMENT => memory address
    cout << *ptr << "\n";   //before last   ELEMENT => 40
    return 0;
}