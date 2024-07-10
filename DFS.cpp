#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfsFunction(int node, vector<int> adj[], int visited[], vector<int> &dfs)
    {
        visited[node] = 1;
        dfs.push_back(node);
        for (auto it : adj[node])
        {
            if (!visited[it])
            {
                dfsFunction(it, adj, visited, dfs);
            }
        }
    }
    vector<int> dfsOFgraph(vector<int> adj[], int v)
    {
        int start = 0;
        int visited[v] = {0};
        vector<int> dfs;
        dfsFunction(start, adj, visited, dfs);
        return dfs;
    }
};

void addEdg(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printAns(vector<int> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "  ";
    }
}
int main()
{
    vector<int> adj[9];
    addEdg(adj, 0, 1);
    addEdg(adj, 1, 2);
    addEdg(adj, 1, 3);
    addEdg(adj, 2, 5);
    addEdg(adj, 2, 6);
    addEdg(adj, 3, 4);
    addEdg(adj, 3, 7);
    addEdg(adj, 4, 8);
    addEdg(adj, 8, 7);

    Solution obj;
    vector<int> ans = obj.dfsOFgraph(adj, 9);

    printAns(ans);

    return 0;
}