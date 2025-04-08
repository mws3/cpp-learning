/*
    control flow    
    if condition introduction

    syntax :

    if (condition is true){
        // do something

    }else if(another condition){
    
    }else {
    
    }

*/ 

#include <iostream>
using namespace std;



int main(){

    // int age =15;
    // cout <<"welcome\n";

    // if (age <18 ){
    //     cout << "be aware !!\n"; 
    // }

////////////////////////////////////////another examble//////////////////
   
    // int number;
    // cout << "guess a number between 1-10\n";
    // cin >> number ;

    // if (number == 2){
    //     cout << "your guess is correct!\n";
    // } 

//////////////////////////////another examble/////////////////////////

    int age =15;
    int points =100;
    int rank = 2;

    if (age >= 18){
        cout << "you are accepted! \n";
    }else if (points > 200){
        cout << "your are accepted by your points! \n";
    }else if (rank > 5){
        cout << " you are accepted by your rank!\n";
    }else {
        cout << "sorry you are not accepted!\n";
    }






    return 0;

}