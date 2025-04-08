/*\
    loop 
        compare
            for => specific number of loops
            while => loop as long condition is true
            do while => always execute once 
            
            
    create three apps
    --  count positive & even Numbers only
    --  guess the number
    --  Reversed Elements From User

*/

#include <iostream>
using namespace std;

int main(){
    // count positive & even Numbers only

    int result =0;
    int nums [] = {10, 20, -20, 30, -30, 13, 40};
    int numSize = size(nums);//7

    for (int i = 0; i < numSize; i++){
        if (nums[i] > 0 && nums[i] % 2 == 0 ){
        result += nums[i];
    }
    }
    cout << "result is : " << result<< endl;
 
    // guess the number
    int guessNumber = 7;
    int guessTries =0;
    int choose;

    cout << "please guess the number beteen 1 & 10\n";

    while(true){
        cin >> choose;
        if (choose == guessNumber){
            cout << "correct, great guess !\n";
            break;
        }
        else {
           cout << "sorry, wrong guess\n";
           guessTries++;
           if (guessTries == 3){
            cout << "sorry , you failed . the number is:"<< guessNumber << endl;
            break;

           }

        }
    }

    // Reversed Elements From User
    int vals[5];
    int inp;
    cout << "type 5 numbers to reverse\n";

    //[0,1,2,3,4]
    for(int i = 4; i >-1 ; i-- ){
        cin >> inp;
        vals[i]=inp;
    }
   
    cout << "===================\n";
    for(int i = 0; i < 5; i++ ){
        cout << vals[i] <<endl; 
    }

    return 0;
}