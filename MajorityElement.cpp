#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[] = {3, 3, 4, 5, 3, 4, 5, 2, 3};
    int n = sizeof(array) / sizeof(array[0]);
    map<int, int> m;

    // Count the frequency of each element
    for (auto var : array)
    {
        m[var]++;
    }

    // Print elements that appear exactly n / 2 times
    for (auto var : m)
    {
        if (var.second == n / 2)
        {
            cout << var.first << endl;
        }
    }

    return 0;
}
