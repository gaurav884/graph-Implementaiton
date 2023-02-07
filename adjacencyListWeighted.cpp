#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<vector<pair<int ,int>>> &adj, int u, int v , int wt)
{

    adj[u].push_back({v , wt});
    adj[v].push_back({u , wt});
}

void printGraph(vector<vector<pair<int , int>>> adj)
{

    for (int i = 0; i < adj.size(); i++)
    {

        cout << i << " => ";

        for (int j = 0; j < adj[i].size(); j++)
        {

            cout << adj[i][j].first<<"("<<adj[i][j].second<<")"<<" ";
        }

        cout << endl;
    }
}

int main()
{

    int V=5;

    vector<vector<pair<int,int>>> adj(V);

    addEdge(adj, 0, 1 , 4);
    addEdge(adj, 0, 4 , 3);
    addEdge(adj, 1, 2 , 7);
    addEdge(adj, 1, 3 , 8);
    addEdge(adj, 1, 4 , 12);
    addEdge(adj, 2, 3 , 18);
    addEdge(adj, 3, 4 , 9);
   
    printGraph(adj);

    return 0;
}