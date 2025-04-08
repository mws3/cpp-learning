#include <iostream>
using namespace std;

int main(){
    cout << "==================================\n";
    int a;
    double b = 20.5;
    a = b;
    cout << a << endl; // 20
    cout << "==================================\n";

    char c ='c';
    int d = 10;

    // cout << int (c) <<endl;
    cout << c + d <<endl; //99 + 10 = 109

    cout << "==================================\n";
    int e =20 ;
    double f =20.5;
    
    cout << e + f << endl; // 20 + 20.5 = 40.5 
    cout << sizeof(e + f) << endl; // 8  

    cout << "==================================\n";
    int g =20 ;
    double h =20.5;
    
    cout << e + (int)f << endl; // 20 + 20.5 = 40       (type casting)
    cout << sizeof(e + (int)f) << endl; // 4  

    cout << e + int(f) << endl; // 20 + 20.5 = 40       (anoother way )
    cout << sizeof(e + int(f)) << endl; // 4  
}