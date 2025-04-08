/*
    string
        concatinating strings
        normal way
        strcat => Include string.h 
        with +
        append
*/

#include<iostream>
#include<string.h> // or #include<cstring> 
using namespace std;

int main(){
    char fname[] = "mohamed ";
    char lname[] = "shaat";

    cout << fname << lname << "\n"; 
    cout << strcat (fname,lname ) << "\n"; // another method
    
    string firstname = "mohamed ";
    string lastname = "shaat";

    cout << firstname + lastname <<"\n"; // 3rd method
    cout << firstname.append(lastname) <<"\n"; // 4th method

    return 0;
}