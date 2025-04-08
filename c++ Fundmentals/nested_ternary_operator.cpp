/*
    CONTROL FLOW

    NESTED TERNARY OPERATOR 
    alternate syntax for if condition 

    SYNTAX:
    (condition is true) ? true : false

*/



#include <iostream>
using namespace std;


int main(){
    int age = 15;
    int points = 500;

    if (age >= 18){
        cout<< "your age is ok\n";
    }else {
        cout<< "your age is NOT ok\n";

    }

    cout <<(age >=18 ? "your age is ok\n" : (points >=500 ? "your points is ok\n" : "your points is not ok\n"));
    // cout <<(points >=500 ? "your points is ok\n" : "your points is not ok\n");
    



    return 0;
}