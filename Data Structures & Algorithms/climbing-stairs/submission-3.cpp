class Solution {
public:
    int solve(int n, vector<int>& v){
        if(n <0)
        return 0;

        if(n ==0)
        return 1;
        if(v[n]!= -1)
        return v[n];
        v[n] = solve(n-1,v)+solve(n-2, v);
        return v[n];
    }
    int solve2(int n){
        vector<int>dp(n+1);
        dp[0] =1;
        dp[1]=1;
        for(int i =2; i<= n; i++) {
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
    int climbStairs(int n) {
        // vector<int> v(n+1, -1);
        // int result = solve(n, v);
        // return result;

        return solve2(n);
    }
};
