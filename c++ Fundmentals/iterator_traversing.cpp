/*
    Vector
        Iterator
            Traversing
            --  begin()
            --  end()
            --  advance()
*/
#include<iostream>
#include<vector>

using namespace std;


int main()
{
    vector<int> nums ={10,20,30,40};
    // vector<double>::iterator first = nums.begin();// the iterator must beintlike the containerthat dealing with it
    vector<int>::iterator first = nums.begin();
    vector<int>::iterator last = nums.end()- 1;

    cout << "First element is : " << *first <<"\n";
    cout << "second element is : " << first[1] <<"\n";
    cout << "third element is : " << first[2] <<"\n";
    
    cout << "Last element is : " << *last <<"\n";
    cout << "Before Last element is : " << *(last - 1) <<"\n";

    advance(first,3); // its like move forward for 3 steps
    cout << "first element is : " << *first << "\n"; //40
    
    advance(first,-2); // its like move backward for 2 steps
    cout << "first element is : " << *first << "\n"; //20

    return 0;
}