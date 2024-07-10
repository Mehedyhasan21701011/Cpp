#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {1, 2, 3};
    int x = sizeof(array) / sizeof(array[0]);
    cout << x << endl;
    int ans[2 * x];
    for (int i = 0; i < 2 * x; i++)
    {
        if (i < x)
        {
            ans[i] = array[i];
        }
        else
        {
            ans[i] = array[i - x];
        }
    }
    for (auto var : ans)
    {
        cout << var << " ";
    }
}