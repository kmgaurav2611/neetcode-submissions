class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size = nums.size();
        int majority = size/3;

        unordered_map<int, int> mp;

        for(int i = 0 ; i < size; i++) {
            mp[nums[i]]++;
        }
        vector<int> result;
        for(auto &item : mp) {
            if(item.second > majority)
            result.push_back(item.first);
        }

        return result;
    }
};