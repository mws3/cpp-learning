/*
loop
    nested loop for 
*/

#include <iostream>
using namespace std;

int main(){

    string products [] = {"Item 1","Item 2","Item 3"};
    string sizes [] = {"Small", "Large", "X-Large"};

    for(int i=0; i < 3; i++)
    {
        cout << "Product name :\n";
        cout << products[i] << "\n";
        cout << "Sizes:\n";
        for(int j =0; j < 3 ; j++)
        {
            cout << sizes[j];
            if (j < 2){
                cout << ", ";
            }
        }
        cout << "\n=====================\n";
        
    }

    return 0;
}