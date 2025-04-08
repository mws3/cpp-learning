/*
    Vector
        Iterator
            --  loop with iterator
            --  ranged loop with foer

*/
#include<iostream>
#include<vector>

using namespace std;


int main()
{
    vector<int> nums ={10,20,30,40};
    vector<int>::iterator it ;

    //loop with iterator

    for (it = nums.begin();it < nums.end(); it++)
    {
        cout << *it << "\n";
    }
    cout << "=========================\n";

    // ranged loop with for

    for(int val : nums)
    {
        cout << val << "\n";
    }
    cout << "=========================\n";

    // ranged loop with for and array 
    int numbers[] = {100,200,300,400,500};
    
    for (int num : numbers)
    {
        cout << num << "\n";
    }

    return 0;
}