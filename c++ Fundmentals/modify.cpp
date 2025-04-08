#include <iostream> 
#include <limits.h> 
using namespace std;


int main(){
    short int age1 =300 ;
    cout << sizeof(age1) << endl; // 2 bytes

    int age =300 ;
    cout << sizeof(age) << endl; // 4 bytes 
  
  
    short last_age =300 ;
    cout << sizeof(last_age) << endl; // 2 bytes 


    cout << sizeof(short) << endl; // 2 bytes 
    cout << sizeof(short int) << endl; // 2 bytes 
    cout << sizeof(long) << endl; // 2 bytes 
    cout << sizeof(long int) << endl; // 2 bytes 
    cout << sizeof(long long) << endl; // 2 bytes 
    cout << sizeof(long long int) << endl; // 2 bytes 



}
