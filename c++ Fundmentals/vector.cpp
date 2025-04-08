/*
    Vector
        What is vector ?
            -- vector is a container for similar data 
            -- vector are dynamic array => array that can change in size
            -- vector is a class template

        VECTOR SYNTAX => vector<Type> variable name

        vector create with all methods
        loop on elements
        Important Notes

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numsOne = {10, 20, 30, 40, 50};
    vector<int> numsTwo = {100, 200, 300, 400, 500};
    vector<int> numsThree (4,50); // {50,50,50,50}

    for (int i =0 ; i < numsOne.size() ; i++)
    {
        cout << numsOne.at(i)<< "  ";
    }
    cout << "\n=======================\n";
    
    for (int i =0 ; i < numsTwo.size() ; i++)
    {
        cout << numsTwo.at(i)<< "  ";
    }
    cout << "\n=========================\n";
    
    cout << "number of elements is " << numsThree.size() << endl;
    
    // numsThree [4] = 1000;        //it will be an ERROR
    numsThree.push_back(1000);      // adding a neww element

    cout << "number of elements is " << numsThree.size() << endl;

    cout << "\n=========================\n";
    
    numsThree.at(0) = 500; // editing the first element

    for (int i =0 ; i < numsThree.size() ; i++)
    {
        cout << numsThree.at(i)<< "  ";
    }

    cout << "\n=========================\n";

    return 0;
}