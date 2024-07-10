#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Optimal Solution
    int array[] = {1, 2, 3, 4, 6, 7};
    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i <= 5; i++)
    {
        xor1 = xor1 ^ array[i];
        xor2 = xor2 ^ (i + 1);
        }
    xor2 = xor2 ^ 7;
    // for (int i = 1; i <= 7; i++)
    // {
    //     xor1 = xor1 ^ i;
    // }
    // int xor2 = 0;
    // for (auto var : array)
    // {
    //     xor2 = xor2 ^ var;
    // }
    int x = xor1 ^ xor2;
    cout << x << endl;

    // Beter solution
    // int array[] = {1, 2, 3, 5, 6};
    // int hashArray[7] = {0};
    // for (int i = 0; i < 5; i++)
    // {
    //     hashArray[array[i]]++;
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     if (hashArray[i] == 0)
    //     {
    //         cout << "MIssing element" << i << endl;
    //     }
    // }

    // brut solution
    //  int array[] = {1, 3, 4, 5, 6, 7};
    //  int n = 6;
    //  for (int i = 1; i <= 7; i++)
    //  {
    //      int flag = 0;
    //      for (int j = 0; j <= n; j++)
    //      {
    //          if (array[j] == i)
    //          {
    //              flag++;
    //              break;
    //          }
    //      }
    //      if (flag == 0)
    //      {
    //          cout << i << " "
    //               << "Missing" << endl;
    //      }
    //      else
    //      {
    //          cout << i << " "
    //               << "NOt mIssing" << endl;
    //      }
    //  }
}