/*
    Function 
        parameters & arguments Training 
        --  create Ice Box
        --  Simple Calculator
*/
#include<iostream>
using namespace std;

void iceBox (string item){ // declare the function
    if (item == "coca cola"){
        cout << "will be more cold\n";
    }
    else if (item == "apple" || item == "juice"){// or
        cout << "will be more fresh\n";
    }
    else{
        cout << "item is invalid\n";
    }
}

void calc (int numOne, int numTwo, string op){
    if (op == "+"){
        cout << numOne << " + " << numTwo << " = ";
        cout << numOne + numTwo << "\n";
    }else if (op == "-"){
        cout << numOne << " - " << numTwo << " = ";
        cout << numOne - numTwo << "\n";        
    }else if (op == "*"){
        cout << numOne << " * " << numTwo << " = ";
        cout << numOne * numTwo << "\n";        
    }else if (op == "/"){
        cout << numOne << " / " << numTwo << " = ";
        cout << numOne / numTwo << "\n";
    }else {
        cout << "you enterd a wrong operator";
    }
}


int main(){
    iceBox ("coca cola");
    iceBox ("apple");
    iceBox ("tv remote");
    iceBox ("juice");
    calc(10,90,"j");
    return 0; 
} 