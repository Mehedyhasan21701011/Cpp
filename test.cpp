#include <bits/stdc++.h>
using namespace std;

int main()
{

    int array[] = {1, 2, 3, 4, 5};
    int n = 5;

    for (int i = 1; i <= n / 2; i++)
    {
        int temp = array[i - 1];
        array[i - 1] = array[n - 1];
        array[n - 1] = temp;
        n--;
    }
    for (auto value : array)
    {
        cout << value << " ";
    }

    return 0;
}