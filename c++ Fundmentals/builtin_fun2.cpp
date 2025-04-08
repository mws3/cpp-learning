/*
function    
    builtin functions
        algorithm header
            - min
            - max
            - count

    create 3 applications 
        find minimum number 
        find maximum number
        count number occurance
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    cout << min (10 ,-20) << "\n";  //-20
    cout << min (10 ,20) << "\n";   // 10
    cout << min ('a' ,'c') << "\n";   // a
    cout << min ('a','C') << "\n";   // C     because of ascii value
    cout << int ('a')<< endl;               //97
    cout << int ('C')<< endl;               //67
    cout << min({10,20,-40,-100,50,-390}) << "\n";//-390
    
    cout << "\n======================\n";

    cout << max (10 ,-20) << "\n";  // 10
    cout << max (10 ,20) << "\n";   // 20
    cout << max ('a' ,'c') << "\n";   // c
    cout << max ('a','C') << "\n";   // a    because of ascii value
    cout << int ('a')<< endl;               //97
    cout << int ('C')<< endl;               //67
    cout << max({10,20,-40,-100,50,-390}) << "\n";//50

    cout << "\n======================\n";
////////////////////////// find min number
    int nums[]={10,20,-40,-100,50,-390};
    int numsSize = size(nums);
    int minNumCheck =0;
    for (int i=0; i<numsSize; i++){

        if (nums[i] < minNumCheck){
            minNumCheck = nums[i];
        }

    }
    cout << minNumCheck << endl;

    cout << "\n======================\n";
////////////////////////// find max number
    int numS[]={10,20,-40,-100,50,-390};
    int numSSize = size(nums);
    int maxNumCheck =0;

    for (int i=0; i<numSSize; i++){

        if (numS[i] > maxNumCheck){
            maxNumCheck = nums[i];
        }
    }
    cout << maxNumCheck << endl;

    cout << "\n======================\n";

    int nums2 []= {10,20,10,10,13,15,100,20,10};
    int num2Size = size(nums2);
    int count =0;
    int choosenNum=10;
    for (int j=0; j < num2Size;  j++)
    {
        if (nums2[j] == choosenNum)
        {
            count++;
        }
    }

    cout << choosenNum << " found " << count << " times"<< endl;
    return 0;
}