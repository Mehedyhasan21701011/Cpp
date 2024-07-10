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
    int array[] = {1, 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};
    int n = 12;
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (array[mid] == 1)
        {
            mid++;
        }
        else if (array[mid] == 0)
        {
            swap(array[mid], array[low]);
            mid++, low++;
        }
        else if (array[mid] == 2)
        {
            swap(array[mid], array[high]);
            high--;
        }
    }
    for (auto var : array)
    {
        cout << var << " ";
    }
}