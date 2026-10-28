class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> fromStart, fromEnd;
        int startProduct = 1;
        for(int i =0; i<nums.size(); i++){
            fromStart.push_back(startProduct);
            startProduct *= nums[i];
        }
        int endProduct = 1;
        for(int i =nums.size()-1; i>=0; i--  ){
            fromEnd.push_back(endProduct);
            endProduct*= nums[i];
        }
        vector<int> result;
        for(int i =0; i<nums.size(); i++){
            int product = fromStart[i] * fromEnd[nums.size()-i-1];
            result.push_back(product);
        }

        return result;
    }
};
