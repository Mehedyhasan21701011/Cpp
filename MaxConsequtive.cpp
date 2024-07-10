#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int n = 9;
    int count = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] != 0)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
        {
            count = 0;
        }
    }

    cout << maxi << endl;
}