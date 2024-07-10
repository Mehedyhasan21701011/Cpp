#include <bits/stdc++.h>
using namespace std;

void search(int array[], int n, int find)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == find)
        {
            cout << "AtIndexOf:" << i << " ";
        }
    }
}

int main()
{
    int array[] = {3, 4, 5, 6, 3, 4, 34, 5};
    int n = 8;
    int find = 3;
    search(array, n, find);
}
