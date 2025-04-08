/*
    control flow 
    if condition training

    4 training apps 
        even/odd checker 
        find greatist number 
        user rank checker 
        simple calculator 


*/

#include <iostream>
using namespace std;


int main(){
    //App 1 even/odd checker
    // int num;
    // cin >> num;

    // if (num % 2 == 0)
    //     cout << "the number is " << num << " Even\n";
    // else
    //     cout << "the number is " << num << "Odd \n";

    // App 2 find the geatist number 

    // int a , b , c;
    // cin >> a >> b >> c;

    // if (a > b && a > c){
    //     cout << "the number " << a << " is the greatist \n";
    // }else if (b > a && b > c){
    //     cout << "the number " << b << " is the greatist \n";
    // }else{
    //     cout << "the number " << c << " is the greatist \n";

    // }

    // App 3 user rank checker 
    // int points;
    // cin >> points;

    // if (0 < points && points < 500 ){
    //     cout << "the user rank is Bronze ";
    // }else if ( 500 <= points && points < 1500 ){
    //     cout << "the user rank is Silver ";
    // }else if ( 1500 <= points && points < 2500 ){
    //     cout << "the user rank is Gold ";
    // }else if ( 2500 <= points ){
    //     cout << "the user rank is Champion ";
    // }else {
    //     cout << "YOU HAVE NO RANK YOU LOSER ";

    // }

    // App 3 user rank checker 
    int num_1, num_2, op;

    cout << "enter number one\n";
    cin >> num_1;
    cout << "enter number TWO\n";
    cin >> num_2;
    cout << "CHOOSE THE OPERATION NUMBER\n";
    cout << "[1] + \n";
    cout << "[2] - \n";
    cout << "[3] / \n";
    cout << "[4] * \n";
    cin >> op;

    if (op == 1){
        cout << num_1 + num_2 << "\n";
    }
    else if (op == 2){
        cout << num_1 - num_2 << "\n";
    }
    else if (op == 3){
        cout << num_1 / num_2 << "\n";
    }
    else if (op ==4 ){
        cout << num_1 * num_2 << "\n";
    }else 
    {
        cout << "opeation is not valid\n";
    }



    return 0;
}


