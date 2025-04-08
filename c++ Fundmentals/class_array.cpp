/*
    Arrays
        array class
        test method     

    Syntax
    Template < Type, size> Identifier; 
      
*/  
#include <array>
#include <iostream>
using namespace std;

int main(){
    // int points[4] = {1, 2, 3 ,4}; // c_style array
    array<int, 4> points = {1, 2, 3 ,4}; // like the above 
    
    cout <<points[0]<< endl;
    cout <<points[1]<< endl;
    cout <<points[2]<< endl;
    cout <<points[3]<< endl;

    cout << "Element count: " << points.size() << endl;
    points.fill(10); 
    cout <<points[0]<< endl;
    cout <<points[1]<< endl;
    cout <<points[2]<< endl;
    cout <<points[3]<< endl;
    points.fill('A'); 
    cout <<points[0]<< endl;
    cout <<points[1]<< endl;
    cout <<points[2]<< endl;
    cout <<points[3]<< endl;
    points.fill(true); 
    cout <<points[0]<< endl;
    cout <<points[1]<< endl;
    cout <<points[2]<< endl;
    cout <<points[3]<< endl;
   return 0;
}