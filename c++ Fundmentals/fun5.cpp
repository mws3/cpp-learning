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

// void calc (int n1, int n2, int n3, int n4){
//     cout << n1 + n2 + n3 + n4 << endl; // every time i can edit and add a new number , so the function now is static 

// }
void calc (int nums[], int count){
    int result=0;
    for(int i =0; i< count ; i++){
        result += nums[i];
    }
    cout << "the result is = "<< result << "\n";
}

int main(){
    int arrayOfNumber[] ={10,20,30,40,50,100};// i can add any number without editing the main function now !
    int numSize= size(arrayOfNumber);
    calc(arrayOfNumber,numSize);
    // calc (10,20,30,40);
    return 0; 
} 