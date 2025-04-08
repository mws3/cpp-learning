/*
    function
        function recursion

*/

#include<iostream>
using namespace std;


int add(int num)
{
    if (num == 0)
    {
        return 0;
    }
    cout << num <<endl;
    cout << "=============================\n";
    return num + add (num -1);

}
// return line explain 
// 5 + (add(4))
// 5 + (4 + add (3))
// 5 + (4 +( 3 + add(2)))
// 5 + (4 + (3 + (2 + add(1))))
// 5 + (4 + (3 + (2 + (1 + add(0)))))

// string clean (string word)
// {
//     int wordSize =size(word); //16
//     for (int i =0 ; i< wordSize; i++)
//     {
//         if (wordSize == 1)
//         {
//             return word;
//         }
//         else if (word[i] == word[i+1])
//         {
//             word = word [i+1];
//             return clean (word);
//         }
//         return clean (word);
//     }
// }




int main()
{
    cout << add(5) << endl; // print the return
    // cout << clean ("wwwwooooorrllddd");
    return 0;
}