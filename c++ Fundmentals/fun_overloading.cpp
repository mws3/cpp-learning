/*
    function
        function overloading
            number and/or type of params is different

*/

#include<iostream>
using namespace std;

void print (int a,  int b)
{
    cout << "Number one is "<< a << endl;
    cout << "Number two is "<< b << endl;
}




//////////////this is called function overloading

void print (int a,  int b, int c)// if i didnt add or remove an argument it will give me an ERROR
{
    cout << "Number one is "<< a << endl;
    cout << "Number two is "<< b << endl;
    cout << "Number three is "<< c << endl;
}

void print (string a,  string b)
{
    cout << "text one is "<< a << endl;
    cout << "text two is "<< b << endl;
}

void print (string a,  int b)
{
    cout << "text one is "<< a << endl;
    cout << "his age is "<< b << endl;
}
int main()
{


    print(10, 20);
    print (100,200,300);
    print("mohamed","wael");
    print("mohamed",23);
    return 0;
}