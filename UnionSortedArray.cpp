#include <bits/stdc++.h>
using namespace std;
vector<int> Union(vector<int> v1, vector<int> v2)
{
    vector<int> unionArray;
    int i = 0, j = 0;
    int n1 = v1.size(), n2 = v2.size();
    while (i < n1 && j < n2)
    {
        if (v1[i] <= v2[j])
        {
            if (unionArray.size() == 0 || unionArray.back() != v1[i])
            {
                unionArray.push_back(v1[i]);
            }
            i++;
        }
        else
        {
            if (unionArray.size() == 0 || unionArray.back() != v2[j])
            {
                unionArray.push_back(v2[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (unionArray.size() == 0 || unionArray.back() != v1[i])
        {
            unionArray.push_back(v1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (unionArray.size() == 0 || unionArray.back() != v2[j])
        {
            unionArray.push_back(v2[j]);
        }
        j++;
    }
    return unionArray;
}
int main()
{
    vector<int> v1 = {3, 4, 5, 6, 7};
    vector<int> v2 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> v3 = Union(v1, v2);
    for (auto var : v3)
    {
        cout << var << " ";
    }
}