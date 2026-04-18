class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> mp;
        for(int i =0; i< nums.size(); i++) {
            mp[nums[i]]++;
        }

        vector<pair<int, int>> p;

        for(auto& item: mp){
            p.push_back({item.second, item.first});
        }

        sort(p.rbegin(), p.rend());

        vector<int> result;

        for(int i =0 ; i< k; i++) {
            result.push_back(p[i].second);
        }

        return result;
    }
};
