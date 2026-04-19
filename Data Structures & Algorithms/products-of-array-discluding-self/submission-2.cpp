class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ltr;
        ltr.push_back(1);
        int lproduct = 1;
        for(int i =1; i< nums.size(); i++) {
            lproduct*= nums[i-1];
            ltr.push_back(lproduct);
        }

        vector<int> rtl;
        rtl.push_back(1);
        int rproduct = 1;
        for(int i = nums.size()-2; i>=0; i--) {
            rproduct*=nums[i+1];
            rtl.push_back(rproduct);
        }

        vector<int> result;
        for(int i =0; i< nums.size(); i++){
            result.push_back(ltr[i] * rtl[nums.size()-i-1]);
        }
        return result;
    }
};
