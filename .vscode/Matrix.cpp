#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zero_set_matrix(vector<vector<int>> given_matrix, int m, int n)
{

    vector<bool> set_zero_row(m, false);
    vector<bool> set_zero_col(n, false);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (given_matrix[i][j] == 0)
            {
                set_zero_row[i] = true;
                set_zero_col[j] = true;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (set_zero_row[i])
        {
            fill(given_matrix[i].begin(), given_matrix[i].end(), 0);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (set_zero_col[i])
        {
            for (int j = 0; j < m; j++)
            {
                given_matrix[j][i] = 0;
            }
        }
    }

    return given_matrix;
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 0, 8},
        {9, 10, 11, 12}};

    vector<vector<int>> Alter_matrix = zero_set_matrix(matrix, 3, 4);

    for (const auto &row : Alter_matrix)
    {
        for (int value : row)
        {
            cout << value << "   ";
        }
        cout << endl;
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cout << "Enter the number or row and column" << endl;
//     int num_row, num_col;
//     cin >> num_row >> num_col;
//     int matrix[num_row][num_col];
//     int m, n;
//     cout << num_col << " " << num_row << endl;
//     cout << "Input matrix" << endl;
//     for (int i = 0; i < num_row; i++)
//     {
//         for (int j = 0; j < num_col; j++)
//         {
//             int x;
//             cin >> x;
//             matrix[i][j] = x;
//         }
//     }
//     cout << "Given Matrix" << endl;
//     for (int i = 0; i < num_row; i++)
//     {
//         for (int j = 0; j < num_col; j++)
//         {
//             cout << matrix[i][j] << "  ";
//         }
//         cout << endl;
//     }
//     for (int i = 0; i < num_row; i++)
//     {
//         for (int j = 0; j < num_col; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 m = i, n = j;
//             }
//         }
//     }
//     for (int i = 0; i < num_row; i++)
//     {
//         for (int j = 0; j < num_col; j++)
//         {
//             if (i == m || j == n)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     cout << endl;
//     for (int i = 0; i < num_row; i++)
//     {
//         for (int j = 0; j < num_col; j++)
//         {
//             cout << matrix[i][j] << "  ";
//         }
//         cout << endl;
//     }
// }