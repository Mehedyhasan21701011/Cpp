#include <bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int, vector<int>, greater<int>> li;
    // li.push(4);
    // li.push(5);
    // cout << li.top();

    // set<int> s;
    // s.insert(10);
    // s.emplace(20);
    // s.emplace(20);
    // s.emplace(30);

    // for (auto it : s)
    // {
    //     cout << it << endl;
    // }

    // auto IT = s.count(5);
    // cout << IT << endl;

    map<int, int> mapp;
    mapp[1] = 40;
    mapp[2] = 46;
    mapp[3] = 42;
    mapp[4] = 47;
    for (auto it : mapp)
    {
        cout << it.first << " " << it.second << endl;
    }
    map<pair<int, int>, int> map1;
    map1[{2, 5}] = 30;
    cout << map1[{2, 5}] << endl;

    map<int, pair<int, int>> map2;
    map2[8] = {2, 50};

    return 0;
}