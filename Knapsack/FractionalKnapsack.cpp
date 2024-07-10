#include <bits/stdc++.h>
using namespace std;

struct Item
{
    /* data */
    int value;
    int weight;
};

class Solution
{
public:
    bool static comp(Item a, Item b)
    {
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1 > r2;
    }
    double KnapSack(int weight, Item array[], int n)
    {
        sort(array, array + n, comp);
        int currentWeight = 0;
        double FinalValue = 0;
        for (int i = 0; i < n; i++)
        {
            if (currentWeight + array[i].weight <= weight)
            {
                currentWeight += array[i].weight;
                FinalValue += array[i].value;
            }
            else
            {
                int remain = weight - currentWeight;
                FinalValue += (array[i].value / (double)array[i].weight) * (double)remain;
                break;
            }
        }
        return FinalValue;
    }
};

int main()
{
    int n = 3, weight = 50;
    Item array[] = {{120, 30}, {100, 20}, {60, 10}};
    Solution Obj;
    double ans = Obj.KnapSack(weight, array, n);
    cout << "This is the Final Value " << setprecision(2) << fixed << ans << endl;
    return 0;
}