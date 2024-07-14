class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        // Code here
        vector<int> vis(V,0),res;
        queue<int> bfs;
        vis[0]=1;
        bfs.push(0);
        while(!bfs.empty())
        {
            int node=bfs.front();
            bfs.pop();
            res.push_back(node);
            for(int i=0;i<adj[node].size();i++)
            {
                
                if(!vis[adj[node][i]])
                { 
                    vis[adj[node][i]]=1;
                    bfs.push(adj[node][i]);
                    
                }
            }
        }
        return res;
    }
};
