#include <bits/stdc++.h>
using namespace std;
// Optimal solution
int SecondLargest(int aray[], int n)
{
    int largest = aray[0];
    int Slargest = 0;
    for (int i = 1; i < n; i++)
    {
        if (aray[i] > largest)
        {
            Slargest = largest;
            largest = aray[i];
        }
        else if (aray[i] < largest && aray[i] > Slargest)
        {
            Slargest = aray[i];
        }
    }
    return Slargest;
}
int SecondSmall(int aray[], int n)
{
    int smallest = aray[n - 1];
    int Ssmallest = INT_MAX;
    for (int i = n - 2; i >= 0; i--)
    {
        if (aray[i] < smallest)
        {
            Ssmallest = smallest;
            smallest = aray[i];
        }
        else if (aray[i] > smallest && aray[i] < Ssmallest)
        {
            Ssmallest = aray[i];
        }
    }
    return Ssmallest;
}
int main()
{
    int array[] = {2, 3, 4, 1, 9, 2, 3, 4, 0, 5};
    int n = sizeof(array) / sizeof(array[0]);
    int slarge = SecondLargest(array, n);
    int ssmall = SecondSmall(array, n);
    cout << "Second Large : " << slarge << " "
         << "Second Small :" << ssmall << endl;
}

// Better solution
//  int main()
//  {
//      int array[] = {2, 3, 4, 1, 9, 2, 3, 4, 0, 5};
//      int n = sizeof(array) / sizeof(array[0]);
//      int largest = array[0];
//      for (int i = 1; i < n; i++)
//      {
//          if (array[i] > largest)
//          {
//              largest = array[i];
//          }
//      }
//      int secondLargest = array[0];
//      for (int i = 1; i < n; i++)
//      {
//          if (array[i] > secondLargest && array[i] != largest)
//          {
//              secondLargest = array[i];
//          }
//      }
//      cout << "Second Largest :" << secondLargest << endl;
//  }