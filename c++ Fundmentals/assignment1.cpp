#include <iostream>
using namespace std; 

int num;

int main(){
    cout << "enter the number of kilobytes\n";
    cin >> num;
    int Bytes =  num * 1000 ;
    int Bits = Bytes * 8;
    cout << "\nthe number of kilobytes you enterd = "<< num;
    cout << "\nthe number of bytes = "<< Bytes << " Bytes";
    cout << "\nthe number of bit = "<< Bits << " Bits";

    
    return 0;
}