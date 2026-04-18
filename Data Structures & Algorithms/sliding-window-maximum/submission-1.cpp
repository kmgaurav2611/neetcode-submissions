class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int maxNum = INT_MIN;
        vector<int> result;
        for(int i =0; i<nums.size()-k+1; i++) {
            // if(i == 0){
                for(int j =i; j< k+i; j++){
                maxNum = max(maxNum, nums[j]);
                }
            // }
            // else{
            //     maxNum = max(maxNum, nums[i+k-1]);
            // }
            result.push_back(maxNum);
            maxNum = INT_MIN;
        }
        return result;

    }
};
