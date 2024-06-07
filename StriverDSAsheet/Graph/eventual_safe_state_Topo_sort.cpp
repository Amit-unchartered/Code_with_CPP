//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        //for using the concept of toposort we are reversing the edges
        //get all the nodes with indegree 0
        //do a removal of edges on adjacent nodes
        vector<int> adjRev[V];
        int indegree[V] = {0};
        
        for(int i=0; i<V; i++){
            //reverse the edges
            for(auto it:adj[i]){
                adjRev[it].push_back(i);
                indegree[i]++;
            }
        }
        
        queue<int> q;
        vector<int>safeNodes;
        for(int i=0; i<V; i++){
                //it is a terminal node
                if(indegree[i]==0){
                    q.push(i);
                }
            }
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            //since its indegree is zero
            //it is a safe node, and is popped out of the queue
            safeNodes.push_back(node);
            for(auto it:adjRev[node]){
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                }
            }
        }
        sort(safeNodes.begin(), safeNodes.end());
        return safeNodes;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends