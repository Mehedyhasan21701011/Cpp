#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[] = {1, 1, 2, 3, 3, 4, 4};
    int x = 0;
    for (auto var : array)
    {
        x = x ^ var;
        // 1^1^2^3^3^4^4
        //  0^ 2^ 0^  0
        //   2^     0
        //    2
    }
    cout << x << endl;

    // int hasharray[5] = {0};
    // for (int i = 0; i < 7; i++)
    // {
    //     hasharray[array[i]]++;
    // }
    // for (int i = 0; i <= 4; i++)
    // {
    //     if (hasharray[i] == 1)
    //     {
    //         cout << "Find element :" << i << endl;
    //         break;
    //     }
    // }
}