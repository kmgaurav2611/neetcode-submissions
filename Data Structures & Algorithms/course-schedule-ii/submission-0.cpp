class Solution {
public:
    vector<int> topologicalSort(unordered_map<int, vector<int>> &adj, int n, vector<int> &indegree){
        vector<int> result;
        queue<int> que;
        int count =0;
        for(int i =0; i<n;i++){
            if(indegree[i] == 0){
                que.push(i);
                count++;
                result.push_back(i);
            }
        }

        while(!que.empty()){
            int item = que.front();
            que.pop();
            
            for(int &v: adj[item]){
                indegree[v]--;

                if(indegree[v] ==0){
                    que.push(v);
                    count++;
                    result.push_back(v);
                }
            }
        }
        if(count == n)
        return result;

        return {};
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> adj;
        vector<int> indegree(numCourses, 0);
        for(auto &item:prerequisites) {
            int a = item[0];
            int b = item[1];

            adj[b].push_back(a);
            indegree[a]++;
        }

        return topologicalSort(adj, numCourses, indegree);
    }
};
