/*
    control flow 
    Switch 

*/


#include <iostream>
using namespace std;

int main(){

    int day;
    cout << " choose from day 1 to 25\n";
    cin >> day; 

    ///////////////// if case example ///////////////

    // if (day==1){
    //     cout << "Open From 08:00 to 18:00\n";
    // }
    // else if (day==2){
    //     cout << "Open From 08:00 to 18:00\n";
    // }
    // else if (day==3){
    //     cout << "Open From 10:00 to 18:00\n";
    // }
    // else{
    //     cout << "WE ARE NOT AVAILABLE\n";

    // }

    ///////////////switch case example/////////////////
    // it can accept int or char only 

    switch(day){
        case 1:
        case 2: // we can merge them like this as they have the same result
            cout << "Open From 08:00 to 18:00\n";
            break;
        case 3:
            cout << "Open From 10:00 to 18:00\n";
            break;
        default:
            cout << "WE ARE NOT AVAILABLE\n";


    }
    // adding brake is optional but it doesnt terminate the cycle which move to the second case




    return 0;
}