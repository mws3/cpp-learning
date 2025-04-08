/*
    Function 
        DRY (dont repeat yourself)
        User defined and built-in
        Syntax:
            returnDataType functionName(param1, param2, param3)
            {
                //function Body contaiin block of code
            }
        Example
        
        Declare a Function and Call it


*/
#include<iostream>
using namespace std;

void sayHello (){
    cout << "Hello osama\n";
}


int main(){

    sayHello();
    cout << "HI, mohamed\n";
    cout << "HI, Ahmed\n";
    cout << "HI, Adel\n";

    return 0; 
}