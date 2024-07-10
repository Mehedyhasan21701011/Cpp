#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end)
{
    for (int i = start; i < end / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[end - 1 - i];
        arr[end - 1 - i] = temp;
    }
}

int main()
{
    int array[] = {1, 1, 2, 2, 3, 3, 4, 5, 6, 6};
    // Most optimal Solution
    int n = 10;
    int d = 2;
    reverse(array, 0, d);
    reverse(array, d, n);
    reverse(array, 0, n);
    for (auto var : array)
    {
        cout << var << " ";
    }

    // set<int> s;
    // for (auto var : array)
    // {
    //     s.insert(var);
    // }
    // for (auto var : s)
    // {
    //     cout << var << " ";
    // }
    // cout << endl;
    // /// Number of the Unique value of Sorted array
    // int len = sizeof(array) / sizeof(array[0]);
    // int i = 1;
    // for (int j = 1; j < len; j++)
    // {
    //     if (array[j] != array[j - 1])
    //     {
    //         i++;
    //     }
    // }
    // cout << i << endl;
    // // Placed First item to last of an array by one pass in same array
    // int array1[] = {5, 6, 8, 3, 2, 6};
    // int temp = array1[0];
    // int length = sizeof(array1) / sizeof(array1[0]);
    // for (int i = 1; i < length; i++)
    // {
    //     array1[i - 1] = array1[i];
    // }
    // array1[length - 1] = temp;
    // for (auto var : array1)
    // {
    //     cout << var << " ";
    // }
    // int d = 2;
    // int j = 0;
    // int tempArray[d] = {0}; // Corrected initialization
    // for (int k = 0; k < d; k++)
    // {
    //     tempArray[k] = array1[k];
    // }
    // for (int k = d; k < length; k++)
    // {
    //     array1[k - d] = array1[k];
    // }
    // for (int l = d; l > 0; l--)
    // {
    //     array1[length - l] = tempArray[d - l];
    // }
    // cout
    //     << endl;
    // for (auto var : array1)
    // {
    //     cout << var << " ";
    // }
}