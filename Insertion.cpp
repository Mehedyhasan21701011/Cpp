#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int array[] = {33, 44, 55, 77, 22, 33, 44, 7};
    int n = sizeof(array) / sizeof(array[0]);
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (array[j - 1] > array[j])
            {
                swap(array[j - 1], array[j]);
            }
        }
    }
    for (int &x : array)
    {
        cout << x << " ";
    }
}