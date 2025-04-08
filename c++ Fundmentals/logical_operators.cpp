    /*
    
    logical operators (we use it if we have multible requists) 

    && -- and
    || -- or
    ! -- not 

    
    
    */ 



#include <iostream>
using namespace std;

int main (){
    // int age = 20;
    // int points = 800;
    // cout << (age >=18 && points >= 500) << endl ; // true = 1 
    
    // int age = 16;
    // int points = 800;
    // cout << (age >=18 || points >= 500) << endl ; // true = 1 
    
    
    // int age = 16;
    // int points = 450;
    // cout << (age >=18 || points >= 500) << endl ; // false = 0 

    cout << (10 == 10) << endl; // true =1
    cout << !(10 == 10) << endl;// false =0
    cout << !(100 == 10) << endl;// true =1

    return 0 ;

}