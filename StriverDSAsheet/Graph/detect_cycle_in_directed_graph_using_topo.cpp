//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
//   private:
//     bool dfsCheck(int node, vector<int>adj[], int vis[], int pathVis[]){
//         vis[node] = 1;
//         pathVis[node] = 1;
//         for(auto it:adj[node]){
//             //if the adjacent node is not previously visited
//             if(!vis[it]){
//                 if(dfsCheck(it,adj,vis,pathVis)==true)
//                 return true;
//             }
//             //it the adjacent node was previously visited and path visited
//             else if(pathVis[it]==1){
//                 return true;
//             }
//         }
        
//         pathVis[node] = 0;
//         return false;
//     }
//   public:
//   //TC --> o(v+e)
//   //sc -> o(n)+o(n) => o(2n)
//     // Function to detect cycle in a directed graph.
//     bool isCyclic(int V, vector<int> adj[]) {
//         // code here
//         int vis[V] = {0};
//         int pathVis[V] = {0};
        
//         for(int i=0; i<V ;i++){
//             if(!vis[i]){
//                 if(dfsCheck(i, adj, vis, pathVis)==true){
//                     return true;
//                 }
//             }
//         }
        
        
//         return false;
//     }
public:
	//Function to return list containing vertices in Topological order.
	
	//topological sort = linear ordering of vertices such that if there is a edge between u and v, u appears before v in that ordering
	bool isCyclic(int V, vector<int> adj[]) 
	{
	    int indegree[V] = {0};
	    for(int i=0; i<V; i++){
	        for(auto it:adj[i]){
	            indegree[it]++;
	        }
	    }
	    
	    queue<int>q;
	    
	    for(int i=0; i<V; i++){
	        if(indegree[i]==0){
	            q.push(i);
	        }
	    }
	    
	    vector<int>topo;
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        topo.push_back(node);
	        //node is inside toposort
	        //so please remove it from the indegree
	        
	        for(auto it:adj[node]){
	            indegree[it]--;
	            if(indegree[it]==0){
	                q.push(it);
	            }
	        }
	    }
	    
	    //no cycle is there in graph
	    if(topo.size()==V){
	        return false;
	    }
	    //cycle is there in graph
	    else return true;
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
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends