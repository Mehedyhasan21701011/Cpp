#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 0, 8},
        {9, 10, 11, 12}};
    cout << matrix[1][2] << endl;
    for (const auto &row : matrix)
    {
        for (int value : row)
        {
            cout << value << " ";
        }
        cout << endl;
    }
}