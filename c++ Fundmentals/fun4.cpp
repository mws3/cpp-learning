/*
    Function 
        parameters & arguments Training 
        --  create Ice Box
        --  Simple Calculator
*/
#include<iostream>
using namespace std;

void detailes  (string msg ="Hi" , string name = "Unknown person"){ // if i didnt pass any argument it will use the default parameters
    cout << msg << " , " << name << endl;
}




int main(){
    detailes("Hello", "mohamed");
    detailes("Hello");
    detailes(); // he will print the default parameters

    return 0; 
} 