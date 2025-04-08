#include <iostream>
using namespace std;


int main(){
    char character;
    int asscii;

    cout << "enter a character" << endl;
    cin >> character ;

    cout << "enter an asscii" << endl;
    cin >> asscii ;

    cout << "asscii for letter is "<<  int (character) << endl;
    cout << "char for assci is "<<  char (asscii);
    return 0;
}



