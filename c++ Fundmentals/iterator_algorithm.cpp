/*
    Vector
        Use Iterator to
            --  sort
            --  count
            --  reverse

*/
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
    vector<int> nums = { 10, 500, 60, -20, 20, 20, 100, 20};

    int val=20;
    int countTimes = count (nums.begin(),nums.end(), val);

    cout << "number "<< val <<" found " << countTimes << " times\n"; // count
    cout <<"====================\n";

    for (int n : nums)
    {
        cout << n << "\n";
    }
    cout <<"====================\n";
    
    sort (nums.begin(), nums.end()); // SORTING

    for (int n : nums)
    {
        cout << n << "\n";
    }
    cout <<"====================\n";
    
    reverse (nums.begin(), nums.end()); // reverse

    for (int n : nums)
    {
        cout << n << "\n";
    }
    cout <<"====================\n";

    return 0;
}