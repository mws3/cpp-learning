/*
    Vector
    -- size()   => current number of elements
    -- max_size()   => maximum number of elements
    -- capacity()   => storage capacity
    -- front()   => first element
    -- back()   => last element
    -- clear()   => clear all elements from vector
    -- empty()   => check if its empty or not 
*/
#include<iostream>
#include<vector>

using namespace std;



int main()
{
    vector<int> nums= {10 ,20, 30, 40};
    cout << nums.size() << "\n";  
    
    cout << nums.max_size() << "\n";  // maximum number of elements

    cout << nums.capacity() << "\n";  // because its four elemnts so the capacity 4 

     nums.push_back(50);
     nums.push_back(60);
     nums.push_back(70);
     nums.push_back(80);
     
     cout << nums.front() <<"\n"; // first element
     cout << nums.at(0) <<"\n"; // first element
     
     cout << nums.back() <<"\n";  // last element 
     cout << nums.at(nums.size() - 1) <<"\n"; // last element   8-1= 7th element

     nums.clear(); // delete all elements
     cout << nums.size() <<"\n"; 

     if (nums.empty())  // CHECK IF IT'S EMPTY?
     {
         cout << "vector is empty "<< "\n";
     }
    else
    {   
         cout << "vector is empty "<< "\n";
    }
      

    return 0;
}
