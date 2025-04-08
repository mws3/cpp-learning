/*\
    loop 
        loop with do while

    syntax
    do
    {
    
    }while (condition is True){
    
    }

*/

#include <iostream>
using namespace std;

int main(){

    int i = 4;

    // while( i < 6){
    //     cout << i << endl;
    //     i++; 
//////////////////// block of code here when (i == 6) will not checked
    // }

    do 
    {
        cout << i << endl;
        i++;              // block of code here checked first before the condition
    } while (i < 6);


    return 0;
}