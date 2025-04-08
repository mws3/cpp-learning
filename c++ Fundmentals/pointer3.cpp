/*
    Pointers
        void, wild pointer and null

*/

#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    int *ptr1 = NULL;
    int *ptr2 = nullptr;

    cout  << ptr << "\n"; // garpage value
    cout  << ptr1 << "\n"; // 0
    cout  << ptr2 << "\n"; // 0

    int a = 100;
    // int* ptr4 = &a;
    void* ptr4 = &a; // use if u dont know the type of data you want

    cout << ptr4 <<"\n";
    // cout << *ptr4 <<"\n"; // if i use void this will give me an error ...we use casting to overcome this error

    // casting

    // c-style 
    // cout << *(int *)ptr4 << "\n";

    // Modern
    cout << *static_cast<int *>(ptr4) << "\n";

    return 0;
}