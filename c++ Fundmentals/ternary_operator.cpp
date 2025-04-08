/*
    CONTROL FLOW

    TERNARY OPERATOR 

    SYNTAX:
    (condition is true) ? true : false

*/



#include <iostream>
using namespace std;


int main(){
    int age = 15;
    if (age >= 18){
        cout<< "your age is ok\n";
    }else {
        cout<< "your age is NOT ok\n";

    }

    cout <<(age >=18 ? "your age is ok\n" : "your age is not ok\n");
    string msg = age >=18 ? "your age is ok\n" : "your age is not ok\n";
    cout << msg;



    return 0;
}