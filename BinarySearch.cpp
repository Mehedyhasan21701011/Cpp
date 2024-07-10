#include <bits/stdc++.h>
using namespace std;

int binaryfunction(int array[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] == target)
        {
            return mid;
        }
        else if (array[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(array) / sizeof(array[0]);
    cout << "Number of element : " << n << endl;
    cout << "Enter your target element: " << endl;
    int x;
    cin >> x;
    cout << "Searching element: " << x << endl;

    int result = binaryfunction(array, n, x);
    if (result == -1)
    {
        cout << "Element not found." << endl;
    }
    else
    {
        cout << "Element found in position " << result << "th index." << endl;
    }
}