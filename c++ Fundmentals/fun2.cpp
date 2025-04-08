/*
    Function 
        parameters & arguments
*/
#include<iostream>
using namespace std;

void sayHello (string msg, string name, int age){ // declare the function
    cout << msg << " " << name << ".\n";
    cout << name << "'s Age Is: " << age <<endl;
}


int main(){

    sayHello("Hello","osama", 40); // calling the function
    sayHello("HI","sayed", 50);
    sayHello("Welcome","ahmed",22);
    // cout << "HI, mohamed\n";
    // cout << "HI, Ahmed\n";
    // cout << "HI, Adel\n";

    return 0; 
} 