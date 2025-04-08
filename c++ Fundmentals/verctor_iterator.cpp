/*
    Vector
        Iteraators

            containers
            array
            vector
            list

    What is iterator/
        Iterator used to point to memory address of the container

    Why we use iterator?
        1- simplify the code => no need to see the full iterations on containers
        2- support for many algorithms like sorting and finding
        3- allow the dealing with one element without the need to load the full list
        4- work the same way with all containers 
        5- it redduce the complixity and execution time of the application

        Syntax 
        -- container<type>::iterator iteratorName;

        Initialize 
        --  with vector syntax
        --  with auto keword

        Print 
            --  [*] Dereference => dont print the iterator, print what is point to
            

    
        Note 
            -- this is not pointer, we will talk about pointers later 
*/
#include<iostream>
#include<vector>

using namespace std;



int main()
{
    vector<int> nums= {10 ,20, 30, 40};
    // vector<int>:: iterator it; // i can makeit likethis and update  its value later
    vector<int>:: iterator it = nums.begin(); // or make it point to the 1st element
    auto ite = nums.begin() + 1;
    
    cout << "First element is : " << *it << "\n";
    cout << "First element is : " << *nums.begin() << "\n";
    cout << "Second element is : " << *ite << "\n";

    nums.erase(nums.begin(), nums.begin() + 2); // it will delete the 0 and 1 elements but not 2 
    cout << "First element after deletion is :" << *nums.begin() <<"\n";



    return 0;
}
