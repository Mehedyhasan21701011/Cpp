#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[] = {10, 22, 12, 3, 0, 6};
    vector<int> L;
    int n = sizeof(array) / sizeof(array[0]);
    int leader = INT_MIN;
    for (int i = n - 1; i > 0; i--)
    {
        if (array[i] > leader)
        {
            leader = array[i];
            L.push_back(leader);
        }
    }
    reverse(L.begin(), L.end());
    for (auto var : L)
    {
        cout << var << " ";
    }
}