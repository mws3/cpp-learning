/*
    Function 
        Forwward Declaration
*/
#include<iostream>
using namespace std;

// // Declaration
// int calc (int n1 , int n2){
//     return n1 + n2;
// }

int calc (int n1 , int n2); // forward declaration

int main(){

    //call 
    cout << calc(10,20);

    return 0; 
} 

// Declaration
int calc (int n1 , int n2){ // if i didnt make the forward declaration it will be an error
    return n1 + n2;
}