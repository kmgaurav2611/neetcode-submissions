class Solution {
public:
    int getPivot(vector<int> &nums) {
        int start =0; 
        int end = nums.size()-1;
        while(start<end) {
            int mid = start + (end - start)/2;
            if(nums[mid] >= nums[0]){
                start = mid+1;
            }
            else
            end = mid;
        }
        return start == nums.size()-1 ? 0 : start;
    }
    int findMin(vector<int> &nums) {
        return nums[getPivot(nums)];
    }
};
