#include <bits/stdc++.h>
using namespace std;

vector<int> SUMation(int aray[], int n)
{
    map<int, int> m;
    int x = -1, i;
    for (i = 0; i < n; i++)
    {
        x = 14 - aray[i];
        if (m.find(x) != m.end())
        {
            break;
        }
        m[aray[i]] = i;
    }
    if (x != -1)
    {
        return {aray[i], x};
    }
    return {};
}

int main()
{
    int array[] = {3, 5, 6, 1, 8, 9};
    int n = 6;
    vector<int> v = SUMation(array, n);

    if (!v.empty())
    {
        for (auto var : v)
        {
            cout << var << " ";
        }
    }
    else
    {
        cout << "NO Pair" << endl;
    }

    return 0;
}
