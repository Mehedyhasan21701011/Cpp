#include <bits/stdc++.h>
using namespace std;
vector<int> fun(int aray[], int n)
{
    vector<int> pos; // push_back function dynamically allocate memory risize memory...
    vector<int> neg;
    vector<int> result(n);
    for (int i = 0; i < n; i++)
    {
        if (aray[i] >= 0)
        {
            pos.push_back(aray[i]);
        }
        else
        {
            neg.push_back(aray[i]);
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        result[2 * i] = pos[i];
        result[2 * i + 1] = neg[i];
    }
    return result;
}

int main()
{
    int array[] = {1, 2, 3, 4, -5, -6, -7, -8};
    int n = 8;
    vector<int> v1 = fun(array, n);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
}

// {
//     int array[] = {1, 2, 3, 4, -5, -6, -7, -8};
//     int newArray[8] = {0};
//     int N = 8;
//     int i, j = 0;
//     for (i = 0; i < N; i = i + 2)
//     {
//         newArray[i] = array[j];
//         j++;
//     }
//     for (i = 1; i < N; i = i + 2)
//     {
//         newArray[i] = array[j];
//         j++;
//     }
//     for (auto var : newArray)
//     {
//         cout << var << " ";
//     }
// }