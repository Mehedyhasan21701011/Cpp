#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[] = {1, 7, 2, 8, 0, 0};
    int breakpoint;
    int index;
    int mini;
    int n = sizeof(array) / sizeof(array[0]);
    vector<int> v;
    for (int i = 1; i < n; i++)
    {
        if (array[i] < array[0])
        {
            breakpoint = array[i];
            index = i;
            break;
        }
        else
        {
            index = 0;
        }
    }
    for (int j = index + 1; j < n; j++)
    {
        v.push_back(array[j]);
    }
    sort(v.begin() + index - 1, v.end());
    for (auto var : v)
    {
        cout << var << " ";
    }
    for (int i = 0; i < n - index - 1; i++)
    {
        if (v[i] > array[index - 1])
        {
            int temp = array[index];
            array[index] = v[i];
            v[i] = temp;
            break;
        }
    }
    sort(v.begin() + index - 1, v.end());
    int j = n - 1;
    for (int i = index + 1; i > n; i++)
    {
        array[i] = v[j];
        j--;
    }
    cout << "\n";
    for (auto var : array)
    {
        cout << var << " ";
    }
}