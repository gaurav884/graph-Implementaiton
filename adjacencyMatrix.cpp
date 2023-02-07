#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<vector<int>> &adj, int u, int v)
{

    adj[u][v] = 1;
    adj[v][u] = 1;
}

void printGraph(vector<vector<int>> adj)
{
    cout<<"     ";
    for(int i=0 ;i<adj.size() ;i++){
         cout<<i<<" ";
    }
    cout<<endl;
    
    for (int i = 0; i < adj.size(); i++)
    {

        cout << i << " => ";
    
        for (int j = 0; j < adj[i].size(); j++)
        {
            
            cout << adj[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{

    int V=5;

    vector<vector<int>> adj(V , vector<int>(V));

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
   
    printGraph(adj);

    return 0;
}