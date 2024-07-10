#include <bits/stdc++.h>
using namespace std;

int findLarge(int array[], int n)
{
    int large = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > large)
        {
            large = array[i];
        }
    }
    return large;
}
int main()
{
    int array[] = {3, 4, 1, 6, 2, 5, 0, 3};
    int n = sizeof(array) / sizeof(array[0]);
    int x = findLarge(array, n);
    cout << "Large :" << x << endl;
}