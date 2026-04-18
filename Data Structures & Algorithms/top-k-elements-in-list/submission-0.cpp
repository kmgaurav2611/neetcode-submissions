class Solution {
public:
    typedef pair<int, int> P;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(int &num: nums) {
            mp[num]++;
        }

        //2 define the min heap
        priority_queue<P, vector<P>, greater<P>> pq;

        // 2 push elements in the min heap
        // maintain the size of k only

        for(auto &it: mp){
            int freq = it.second;
            int number = it.first;
            
            pq.push({freq, number});

            if(pq.size()>k){
                pq.pop();
            }

        }

        vector<int> result;

        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};
