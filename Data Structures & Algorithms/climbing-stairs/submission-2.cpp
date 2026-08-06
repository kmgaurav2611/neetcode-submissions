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
    int climbStairs(int n) {
        vector<int> v(n+1, -1);
        int result = solve(n, v);
        return result;
    }
};
