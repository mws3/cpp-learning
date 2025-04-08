/*
    Pointers

    wwhat are pointers ?
        --  A variable that store memory address of other variable 

    Why we need pointers?
        --  to iterate on elements in data structure like array
        --  pass function to other function 
        --  dunamic memory allocation

    Benefits of using pointers 
        --  reduce the code and increase performance 

    NOTE
        there is Raw pointers and Smart pointers

    Syntax  
        Declare a pointer
        Print variable memory address => Reference operator || Address of [&]
        Print value that memory address point to => Dereference operator [*]
        change variable value with pointer

*/
#include<iostream>

using namespace std;

int main()
{
    int num = 100;
    int *ptr = &num; // pointer at address of the num

    cout << "value: " << num <<"\n";
    cout << "address : " << &num <<"\n"; // print memory address
    cout << "address: " << ptr <<"\n";   // print memory address
    cout << "value: " << *ptr <<"\n";   // print value
    
    *ptr = 200; // CHANGING THE VALUE WITHOUT CHANGING THE ADDRESS
    
    cout << "value: " << num <<"\n";
    cout << "address : " << &num <<"\n"; // print memory address
    cout << "address: " << ptr <<"\n";   // print memory address
    cout << "value: " << *ptr <<"\n";   // print value

    return 0;
}