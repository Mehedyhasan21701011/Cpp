#include <bits/stdc++.h>
using namespace std;

int binaryfunction(int array[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (array[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int array[] = {3, 5, 8, 15, 19};
    int n = sizeof(array) / sizeof(array[0]);
    cout << "Number of element : " << n << endl;
    cout << "Enter your target element: " << endl;
    int x;
    cin >> x;
    cout << "Searching element: " << x << endl;
    int result = binaryfunction(array, n, x);
    if (result == n)
    {
        cout << "Lower bound not found." << endl;
    }
    else
    {
        cout << "Lower bound at index " << result << " value " << array[result] << endl;
    }
}