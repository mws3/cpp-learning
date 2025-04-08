/*
    Vector

        access 
            -- at()
            -- square brackets [] < do not use

        Add 
            -- push_back ==> add element to the end

        Update
            -- at()

        Delete 
            -- pop_back() ==> Remove element from the end
*/
#include<iostream>
#include<vector>

using namespace std;



int main()
{
    vector<int> nums= {10 ,20, 30};
    cout << nums.at(2) << "\n";  //access
    // cout << nums[3]<< "\n"; // it should give me an error because its out of range 

    nums.push_back(40);          // add
    cout << nums.size()<< "\n";

    cout << nums.at(3) << "\n";  // Update
    
    nums.push_back(500);          // add 500
    cout << nums.at(4) << "\n";  //access
    cout << nums.size()<< "\n";   // 5

    nums.pop_back();              // delete
    cout << nums.size()<< "\n";   // 4




    return 0;
}
