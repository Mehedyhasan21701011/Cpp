#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[] = {7, 2, 8, 3, 4, 5, 1};
    int n = sizeof(array) / sizeof(array[0]);
    for (int i = 1; i < n; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
    for (auto value : array)
    {
        cout << value << " ";
    }

    return 0;
}