 vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int>q;
        int vis[V]={0};
         q.push(0);
         vis[0]=1;
         vector<int>bfs;
         while(!q.empty()){
             int node=q.front();
             q.pop();
             bfs.push_back(node);
             for(auto it:adj[node]){
                 if(!vis[it]){
                     vis[it]=1;
                     q.push(it);
                 }
             }
         }
         return bfs;
        
    }