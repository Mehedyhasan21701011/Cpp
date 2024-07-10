#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[array[i]]++;
    }

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}