/*
    string
        STRING TYPES
        C STYLE STRING USING
        STRING CLASS USING STANDARD LIBRARY
    TEST TYPES SIZE 
    NULLTERMINATED STRING
    \0 => NULL (termination) 


    ** REMEMBER 
        String is an array of characters

*/

#include <iostream>
using namespace std;

int main ()
{
    cout << "iam dragon\n"; //12
    cout << "iam\0 dragon\n"; // iam
    cout << "\n";

    char name_a[] = "Elzero";
    cout << name_a << "\n"; // Elazero\0
    cout << sizeof(name_a) << "\n"; // 7
    cout << name_a[0] << "\n"; // E
    cout << name_a[5] << "\n"; // o
    
    cout << int(name_a[6]) << "\n"; // \0 => NULL => ASCII VALUE => 0
    cout << int('\b') << "\n";        //  => ASCII VALUE => 8  (just to make sure)

    // entering the array manully 
    char name_b[] = {'E','l','z','e','r','o','\0'};
    cout << name_b << "\n"; // Elazero\0
    cout << sizeof(name_b) << "\n"; // 7
    cout << name_a[0] << "\n"; // E
    cout << name_a[5] << "\n"; // o

    // entering the array using the class
    string name_c = "Elzero";
    cout << name_c << "\n"; // Elazero\0
    cout << sizeof(name_c) << "\n"; // 32
    cout << name_c[0] << "\n"; // E
    cout << name_c[5] << "\n"; // o 

    return 0;
}