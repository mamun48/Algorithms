#include <bits/stdc++.h>
using namespace std;
void dfs(int current, vector<vector<int>> &graph, vector<int> &visited)
{
    cout << current << " ";
    visited[current] = 1;
    for (auto neighbour : graph[current])
    {
        if (!visited[neighbour])
        {
            dfs(neighbour, graph, visited);
        }
    }
}
int main()
{
    int n;
    cin >> n; // How many nodes are in graph
    vector<vector<int>> graph(n + 1);
    int source, destination;
    while (cin >> source >> destination)
    {
        graph[source].push_back(destination);
        //For biderectional graph
        graph[destination].push_back(source);

    }
    vector<int> visited(n, 0);
    dfs(0, graph, visited);
}