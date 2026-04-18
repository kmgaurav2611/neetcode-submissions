class Solution {
public:
    int se(vector<int>& nums, int left, int right, int target){
        if(left > right)
        return -1;
        int mid = (left+right) / 2;
        if(target < nums[left] || target > nums[right])
        return -1;
        if(nums[mid] == target)
        return mid;
        if(nums[mid] > target)
        return se(nums, left, mid-1, target);
        else return se(nums, mid+1, right, target);
    }
    int search(vector<int>& nums, int target) {
        int ans = se(nums, 0, nums.size()-1, target);
        return ans;
    }
};
