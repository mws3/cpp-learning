/*
    Vector
        -- vector vs array

        vector 
            it need a standard header to work 
            can be resized after insertion or deletion of elements
            not index based and elements accessed by iterators
            vector are slower than arrays 
            vector occupy more memory
            vector available in c++ only

        Array 
            c-array is language construct 
            cannot be resized after its defined 
            elements accessed by indexes 
            arrays are faster than vectors
            arrays occupy less memory 
            array available in c and c++


        when we use the vector ?
            -- when we dont know the size of the list 
        
        when ew use array ?
            -- when it comes to performance & speed


NOTE 1- After learning pointers there will be more things to compare 
NOTE 2- you can still create dynamic array but vector is better


*/
#include<iostream>
#include<vector>
#include<array>

using namespace std;


void calc (vector<int> numsVector)
{
    int result=0;
    for(int i =0; i< numsVector.size() ; i++)
    {
        result += numsVector[i];
    }
    cout << "the result is = "<< result << "\n";
}



int main()
{
    int nums[4] = {10,20,30,40};
    nums [4] = 50;
    cout << nums[4] << "\n";

    cout << "===================\n";

    array<int, 4> numsArray = {10,20,30};
    cout << numsArray [2] << "\n";
    numsArray [3] = 40;
    cout << numsArray [3] << "\n";

    cout << "===================\n";


    vector<int> arrayOfNumber ={10,20,30,40,50,100,250};
    calc(arrayOfNumber);

    return 0;
}
