class Solution {
public:
    // void reverse(vector<int>& nums, int start, int end) {

    // }
    void rotate(vector<int>& nums, int k) {
        int mo = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+mo);
        reverse(nums.begin()+mo, nums.end());
    }
};