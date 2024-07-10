#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

void pascalTriangle(int n)
{
    // printing the entire row n:
    for (int c = 1; c <= n; c++)
    {
        int result = nCr(n - 1, c - 1);
        cout << result << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        pascalTriangle(i);
    }
    return 0;
}