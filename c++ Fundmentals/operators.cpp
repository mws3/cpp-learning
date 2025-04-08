#include <iostream>
using namespace std;

int main(){
    cout << "==================================\n";

    cout << 10 + 20 << endl; // int 
    cout << 10.5f + 20.5f << endl; // float 
    cout << 10.5 + 20.5 << endl; // double 
    cout << sizeof(int(10.5 + 20.5)) << endl; // double to int 

  
    cout << "==================================\n";
    cout << 100 - 50 << endl;
    cout << 100 - -50 << endl;

    cout << 10 * 5 << endl;
    cout << 20 / 5 << endl;
    cout << 12 / 5 << endl; // = 2.4 (but because its an  integer so =2    )
    cout << 12.f / 5.f << endl; // = 2.4 
    cout << 12.f / 5 << endl; // = 2.4 
    cout << 12 % 5 << endl; // = 2     (the extra numbers that if no exist will give me 0 remaining ) % for int only 
    cout << 34 % 5 << endl; // = 4     (the extra numbers that if no exist will give me 0 remaining )
// (%) modulo : all it can do is to delete the extra numbers so when the division is done it return no remaining and in the end it gives u the total number deleted      

    cout << "==================================\n";

    int a =10;
    // a = a + 10; // a = 10 + 10 = 20    
    a += 10; // a = 10 + 10 = 20    
    cout << a << endl ;

    int b =20;
    // b = b - 10; // b = 20 + 10 = 10    
    b -= 10; // b = 20 + 10 = 10    
    cout << b << endl ;

    int c = 10;
    c *= 10;
    cout << c <<endl;

    int d = 10;
    d /= 10;
    cout << d <<endl;    

    int e = 255;
    e %= 10;
    cout << e <<endl;    

    cout << "==================================\n";
    

    return 0;    
}