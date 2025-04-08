/*
    Function 
        Return Statement
*/
#include<iostream>
using namespace std;


int calc (int n1, int n2){
    cout << "operation is done\n";
    return n1 + n2; // now this value in my hand and i can use it in nay operation
}// return is the end of block code ,any thing after it will not show



void calcc  (int n3, int n4){
    cout << n3 + n4 << endl;
    return;// because its a void fun it will not return anything so the return here acts as BREAK
}
int main(){
    int result= calc(10, 20); //    return n1 + n2;
    cout << result + 20 << "\n";
    cout << result * 10 << "\n";

    return 0; 
} 