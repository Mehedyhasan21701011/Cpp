#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[] = {5, 6, 3, 2, 4, 6, 5};
    int end = 6;
    int start = 0;
    while (start <= end)
    {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }

    for (auto var : array)
    {
        cout << var << endl;
    }
}