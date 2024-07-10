#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array1[] = {5, 6, 7, 8, 9};
    int array2[] = {1, 2, 3, 4, 56};
    int x = sizeof(array1) / sizeof(array1[0]);
    int y = sizeof(array2) / sizeof(array2[0]);
    int total = x + y;

    // Allocate enough space for the merged array
    int array3[total];

    int i = 0, j = 0;
    for (int k = 0; k < total; k++)
    {
        if (i < x && (array1[i] < array2[j]))
        {
            array3[k] = array1[i];
            i++;
        }
        else
        {
            array3[k] = array2[j];
            j++;
        }
    }

    // Print the merged array
    for (int i = 0; i < total; i++)
    {
        cout << array3[i] << " ";
    }

    return 0;
}
