#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> bfsOFgraph(int v, vector<int> adj[])
    {
        int visited[v] = {0}; // Array to keep track of visited nodes
        visited[0] = 1;       // Mark the starting node as visited
        queue<int> q;         // Queue for BFS traversal
        q.push(0);            // Push the starting node into the queue

        vector<int> bfs; // Vector to store BFS traversal result
        while (!q.empty())
        {
            int node = q.front(); // Get the front node from the queue
            q.pop();              // Remove the front node from the queue
            bfs.push_back(node);  // Push the node into the BFS traversal result

            // Traverse all adjacent nodes of the current node
            for (auto it : adj[node])
            {
                if (!visited[it]) // If the adjacent node is not visited
                {
                    visited[it] = 1; // Mark it as visited
                    q.push(it);      // Push it into the queue for traversal
                }
            }
        }
        return bfs; // Return the BFS traversal result
    }
};
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printAns(vector<int> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "   ";
    }
}

int main()
{
    vector<int> adj[15];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 6);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 6, 7);
    addEdge(adj, 6, 9);
    addEdge(adj, 4, 5);
    addEdge(adj, 7, 8);
    addEdge(adj, 5, 8);

    Solution obj;
    vector<int> ans = obj.bfsOFgraph(10, adj);

    printAns(ans);
    return 0;
}