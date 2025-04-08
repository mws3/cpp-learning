#include <iostream>
using namespace std;

int var = 500; // global variable (i can use it in any function)

const int num = 1; // constant variable that cant be edited in the code (like working hours =8 )

int second(){
    int lol =50; // local variable special for second function 
    cout << "\ncoming from second " << var ;
    cout << "\nlol value " << lol ;
    return 0;
}

    



int main() {
    int x ,y ,z ;
    x=10;
    y=20, z=30 ;

    cout << x + y + z ;
    cout << "\n=============================\n";

    int a , b , c;
    a = b = c = 10;
    cout << a + b + c;

    cout << "\n=============================\n";
    cout << "coming from main  " << var ;
    // cout << "\nlol value " << lol ;  // undefined variable
    second();
    // const int D;
    // cout << "D" << D ;


    // num = 200; // cant edit this constant variable 


    return 0;
}