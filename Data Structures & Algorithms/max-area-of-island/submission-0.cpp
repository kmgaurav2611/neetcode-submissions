class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j, int m, int n){
        if(grid[i][j] == 0)
        return 0;

        grid[i][j] = 0;

        int leftSum =0, rightSum =0, topSum =0, bottomSum =0;

        if(i-1 >=0 && grid[i-1][j] == 1)
        leftSum = dfs(grid, i-1, j, m, n);

        if(i+1 <m && grid[i+1][j] == 1)
        rightSum = dfs(grid, i+1, j, m,n);

        if(j-1 >=0 && grid[i][j-1] == 1)
        bottomSum = dfs(grid, i, j-1,m,n);

        if(j+1 < n && grid[i][j+1] == 1)
        topSum = dfs(grid, i, j+1, m,n);

        return 1+leftSum+rightSum+topSum+bottomSum; 
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea =0;

        int m = grid.size();
        int n = grid[0].size();

        for(int i =0; i<m; i++) {
            for(int j =0; j< n; j++) {
                if(grid[i][j] == 1){
                    int area = dfs(grid, i, j, m, n);
                    maxArea= max(area, maxArea);
                }
            }
        }

        return maxArea;
    }
};
