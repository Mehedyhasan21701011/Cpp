#include <bits/stdc++.h>
using namespace std;

int main()
{
    int V = 49;
    vector<int> ans;
    int coins[] = {1,
                   2,
                   5,
                   10,
                   20,
                   50,
                   100,
                   500,
                   1000};
    int n = sizeof(coins) / sizeof(coins[0]);

    for (int i = n - 1; i >= 0; i--)
    {
        while (V >= coins[i])
        {
            V -= coins[i];
            ans.push_back(coins[i]);
        }
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}