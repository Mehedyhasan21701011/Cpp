#include <bits/stdc++.h>
using namespace std;

string is_Sorted(int array[], int n)
{

    for (int i = 1; i < n; i++)
    {
        if (array[i] > array[i - 1])
        {
            continue;
        }
        else
        {
            return "False";
        }
    }

    return "True";
}

int main()
{
    int array[] = {7, 8, 9, 10};
    int len = sizeof(array) / sizeof(array[0]);

    string x = is_Sorted(array, len);
    cout << "IS Sorted : " << x << endl;
    // for (int i = 1; i < len; i++)
    // {
    //     if (array[i] > array[i - 1])
    //     {
    //         if (i == len - 1)
    //         {
    //             cout << "Sorted" << endl;
    //         }
    //         else
    //         {
    //             continue;
    //         }
    //     }
    //     else
    //     {
    //         cout << "Not Sorted" << endl;
    //         break;
    //     }
    // }
}