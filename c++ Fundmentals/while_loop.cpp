/*\
    loop 
        loop with while

    syntax
    while (condition is True){
    
    }

*/

#include <iostream>
using namespace std;

int main(){

        // for (int i=0; i < 5 ;i++){
        //     cout << i << endl;
        // }





    int i =0;

    while( i < 5){
        cout << i << endl;
        i++;

        if(i == 2){
            break; // if i dont want to wait until the condition is false
        }
    }


    return 0;
}