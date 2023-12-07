#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n, m; 
    cin >> n >> m;
    //graph is stored here
    // it is for undirected 
    //SC --> O(2*no. of edges)
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //if it is directed then
    //u --> v 
    //space complexity --> O(no. of edges)
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        //adj[v].push_back(u);
    }

    return 0;
}