#include <bits/stdc++.h>
using namespace std;

void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int array[] = {2, 4, 5, 9, 7, 3};
    int n = sizeof(array) / sizeof(array[0]);
    cout << "Size of array :" << n << endl;

    // finding breakpoint
    int break_index;
    for (int i = n - 2; i >= 0; i--)
    {
        if (array[i] < array[i + 1])
        {
            break_index = i;
            break;
        }
    }
    cout << "Break index :" << break_index << endl;

    // swaping
    for (int i = n - 1; i > break_index; i--)
    {
        if (array[i] > array[break_index])
        {
            swap(array[i], array[break_index]);
            break;
        }
    }

    cout << "After swaping: array[n-1]" << array[n - 1] << endl;

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }
    cout << endl;
    // reversing
    int k = n - 1 - break_index;
    cout << k << endl;
    for (int i = break_index + 1; i <= k / 2; i++)
    {
        int temp = array[i];
        array[i] = array[k - 1];
        array[k - 1] = temp;
        k--;
    }

    // printing
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "  ";
    }
}

// int main()
// {
//     // Using stl;
//     vector<int> arr = {2, 1, 3};
//     next_permutation(arr.begin(), arr.end());
//     for (auto var : arr)
//     {
//         cout << var << " ";
//     }
// }