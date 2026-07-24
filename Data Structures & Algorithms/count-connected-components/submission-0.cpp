class Solution {
public:
    void dfs(vector<vector<int>> &adj, int u, vector<int> &visited) {
        if(visited[u])
        return;
        visited[u] = true;

        for(auto &v: adj[u]){
            if(!visited[v]){
                dfs(adj,v, visited);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);

        for(int i =0; i<edges.size(); i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        int count =0;
        vector<int> visited(n, false);

        for(int i=0; i<adj.size(); i++) {
            if(!visited[i]){
                dfs(adj, i, visited);
                count++;
            }
        }
        return count;
    }
};
