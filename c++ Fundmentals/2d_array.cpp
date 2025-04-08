/*
    Arrays
      Two dimensional arrays aka [2D Array] 
      
      
*/  
#include <iostream>
using namespace std;

int main(){
    int points_a[3] = {1, 2, 3};
    int points_b[3] = {4, 5, 6};
    int points_c[3] = {7, 8, 9};

    const int rows = 3;
    const int coloumns = 3;
    int points[rows][coloumns] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}}; // 2D array
    // Good Practice
    cout << points[1][2] << endl; // 6 (1st [] for rows and the 2nd for the coloumns)
    cout << points[2][0] << endl;// 7 (1st [] for rows and the 2nd for the coloumns)
    cout << points[2][2] << endl;// 9 (1st [] for rows and the 2nd for the coloumns)


    //Bad Practice
    // int points [3][3] = {1, 2, 3,4, 5, 6,7, 8, 9}; // 2D array

    // cout << points[1][2] << endl; // 6 (1st [] for rows and the 2nd for the coloumns)
    // cout << points[2][0] << endl;// 7 (1st [] for rows and the 2nd for the coloumns)
    // cout << points[2][2] << endl;// 9 (1st [] for rows and the 2nd for the coloumns)
    // BECAUSE YOU CANT SEE WHERE IS THE ROWS AND COLOUMNS
    return 0;
}