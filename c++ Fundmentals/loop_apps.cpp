/*\
    loop 
        break (skip)
        continue (stop)

*/

#include <iostream>
using namespace std;

int main(){

    int nums [] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++ ){

        cout << nums[i] << endl;
        if (nums[i]==10){
            break; // it will stop the iteration 
        }



        // if (nums[i]==20){
        //     continue;// it will skip the iteration AND IT MUST BE BEFORE THE ACTION
        // }

        // cout << nums[i] << endl;
        // cout << "After" << endl;
        

    }



    return 0;
}