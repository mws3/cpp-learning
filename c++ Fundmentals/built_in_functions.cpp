/*
    function    
        math function
            pow
            fmod
            ceil
            floor
            round
            trunc
*/
#include <iostream>
#include <cmath>
using namespace std;

int main (){

    cout << pow(2,4) << endl;// 16
    cout << 2*2*2*2 << endl; // 16


    cout << 11 % 2 << endl; // 1
    // cout << 11.5 % 2 << endl; // Error
    cout << fmod(11.5 , 2) << endl; // 1.5


    cout << ceil(9.1) <<"\n"; // 10 ceil==ceiling
    cout << floor(9.9) << "\n";// 9 

    
    cout << round(9.5) << "\n"; //10
    cout << round(9.4) << "\n"; //9 
    cout << round(9.49) << "\n"; //9
    
    
    cout << trunc(9.9) << "\n"; //9   it will remove the fraction
    cout << trunc(9.5) << "\n"; //9
    cout << trunc(9.1) << "\n"; //9


    return 0;
}