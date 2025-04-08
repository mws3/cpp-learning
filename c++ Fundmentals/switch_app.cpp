/*
    control floww
    switch Trainings
        Award system application
        discount application    
        simple calculator application
*/


#include <iostream>
using namespace std;

int main(){
    // // app 1 => Awward system Application
    // int num;
    // cout << "Type The Number";
    // cin >> num;

    // switch (num){
    //     case 110:
    //     case 120:
    //     case 130:
    //         cout<<"congrats for the iphone";
    //     break;
    //     case 200:
    //         cout<<"congrats for the ipad";
    //     break;
    //     case 300:
    //         cout<<"congrats for the TV";
    //     break;
    //     case 400:
    //         cout<<"congrats for the car";
    //     break;
    //     default:
    //         cout<<"No award for this number";

    // }

///////////////////////////////////////////////

    // // app 2 =>  discount application
    // int price =100;
    // int discount =10;
    // int years;
    // cout <<"type the number of years\n";
    // cin >> years;

    // switch(years){
    //     case 1:
    //         discount =20;
    //         break;    
    //     case 2:
    //         discount =40;
    //         break;    
    //     case 3:
    //         discount =80;
    //         break;    
    // }   
    // cout << "the price is " << price - discount ;
    
///////////////////////////////////////////

// app 3 => simple calculator application


int n1, n2, op;

    cout << "enter number one\n";
    cin >> n1;
    cout << "enter number TWO\n";
    cin >> n2;
    cout << "CHOOSE THE OPERATION NUMBER\n";
    cout << "[1] + \n";
    cout << "[2] - \n";
    cout << "[3] / \n";
    cout << "[4] * \n";
    cin >> op;

    // if (op == 1){
    //     cout << n1 + n2 << "\n";
    // }
    // else if (op == 2){
    //     cout << n1 - n2 << "\n";
    // }
    // else if (op == 3){
    //     cout << n1 / n2 << "\n";
    // }
    // else if (op ==4 ){
    //     cout << n1 * n2 << "\n";
    // }else 
    // {
    //     cout << "opeation is not valid\n";
    // }
    switch (op){
        case 1:
            cout << n1 << "+" << n2 << "=" << n1 + n2 << "\n";
            break;
        case 2:
            cout << n1 << "-" << n2 << "=" << n1 - n2 << "\n";
            break;
        case 3:
            cout << n1 << "/" << n2 << "=" << n1 / n2 << "\n";
            break;
        case 4:
            cout << n1 << "*" << n2 << "=" << n1 * n2 << "\n";
            break;
        default: 
            cout << " operation is not valid\n";
    }


    return 0;
}