#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int array[] = {5, 6, 0, 3, 2, 0, 0, 4, 6, 5};
    int i = 0, j = 1, n = 9;
    while (j <= n)
    {
        if (array[i] != 0)
        {
            i++;
            j++;
        }
        else if (array[i] == 0 && array[j] != 0)
        {
            swap(array[i], array[j]);
            i++;
            j++;
        }
        else if (array[i] == 0 && array[j] == 0)
        {
            j++;
        }
    }

    for (auto var : array)
    {
        cout << var << " "; // Changed endl to " " for space-separated output
    }
    cout << endl;
}
