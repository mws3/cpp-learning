/*
Calculate Your Age Application
*/

#include <iostream>
using namespace std;

int main (){
    cout <<"============================================\n";
    cout <<"====== Calculate Your Age Application ======\n";
    cout <<"============================================\n";

    int age;
        
    cin >> age;
    int age_in_days = age * 365;
    int age_in_hours = age_in_days *24;
    int age_in_minutes = age_in_hours *60;
    int age_in_seconds = age_in_minutes *60;

    //cout <<"your age is : " << age;
    cout <<"your age in days : " << age_in_days << " Days\n";
    cout <<"your age in hours : " << age_in_hours << " Hours\n";
    cout <<"your age in minutes : " << age_in_minutes << " Minutes\n";
    cout <<"your age in seconds : " << age_in_seconds << " Seconds\n";


    return 0;

}