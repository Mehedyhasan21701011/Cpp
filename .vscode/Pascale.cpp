#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the number or row:" << endl;
    int n;
    cin >> n;

    for (int j = 1; j <= n; j++)
    {
        int pas = 1;
        cout << pas << "  ";
        for (int i = 1; i < j; i++)
        {
            pas = pas * (j - i);
            pas = pas / i;
            cout << pas << "   ";
        }
        cout << endl;
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int fact(int f)
// {
//     int facto = 1;
//     for (int j = f; j > 1; j--)
//     {
//         facto = facto * j;
//     }
//     return facto;
// }

// int main()
// {
//     cout << "Enter the number of row:" << endl;
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             int x = fact(i - 1);
//             int y = fact(j - 1);
//             int z = fact(i - j);
//             int result = (x / (y * z));
//             cout << result << " ";
//         }
//         cout << endl;
//     }
// }