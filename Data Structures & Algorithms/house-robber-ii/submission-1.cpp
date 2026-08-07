class Solution {
public:
    long long int solve(vector<int> &nums){
        int n = nums.size();
        if(n == 1)
        return nums[0];

        long long prev2 =0; 
        long long prev1 = nums[0];

        for(int i =1; i< n; i++) {
            long long incl = nums[i]+ prev2;
            long long excl = prev1;

            long long ans = max(incl, excl);
            prev2 = prev1;
            prev1 = ans;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n ==1)
        return nums[0];
        vector<int>first, last;

        for(int i =0; i<n; i++) {
            if(i != n-1)
            first.push_back(nums[i]);
            if(i != 0)
            last.push_back(nums[i]);
        }

        return max(solve(first), solve(last));

    }
};
