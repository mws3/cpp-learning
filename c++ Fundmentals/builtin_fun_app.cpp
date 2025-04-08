/*
    function    
        Built_in function
            cctype functions
                tolower()
                toupper()
                isupper()
                islower()
                isspace()

        create  2 applications
            swap case app
            remove spaces app
*/
#include <iostream>
#include <cctype>
using namespace std;

int main (){

    cout << "A" << "\n";            //  A
    cout << tolower('A') << "\n";   //  97 => ASCII VALUE 
    cout << char(tolower('A')) << "\n";   //  a 
    cout << char(97) << "\n";   //  a 
    cout << "=======================" << "\n";
    
    cout << "b" << "\n";            //  b
    cout << toupper('b') << "\n";   //  66 => ASCII VALUE 
    cout << char(toupper('b')) << "\n";   //  B 
    cout << char(66) << "\n";   //  B 

    cout << "\n=======================\n";

    // swap case app

    string nameone = "MOhaMEd"; //moHAmeD
    int nameoneSize = size(nameone);

    for (int i=0; i < nameoneSize; i++)
    {
        if (isupper( nameone[i])){

            cout << char(tolower(nameone[i]));
        }else {
            cout << char(toupper(nameone[i])) ;

        }

        // cout << nameone[i] << endl;
    }

    cout << "\n=======================\n";

    string nametwo = "m o  ha m    e  d  ";
    int nametwoSize = size(nametwo);
    cout << nametwo  << endl;

    for (int j=0; j < nametwoSize; j++){

        if (isspace(nametwo[j])){
            continue;

        }
        cout << nametwo[j] ;

    }

    return 0;
}