class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int res = 0;

        // hash all the array elements
        for(int val:nums)
        st.insert(val);

        // check each possible sequence from the start then update optimal length
        for(int val: nums) {
            // check if the current element is the start of the sequence
            if(st.find(val) != st.end() && st.find(val -1) == st.end()) {
                // check for next elements in the sequence
                int curr = val, cnt =0;
                while(st.find(curr) != st.end()) {
                    // remove this number to avoid recomputation
                    st.erase(curr);
                    curr++;
                    cnt++;
                }

                // update optimal length
                res = max(res, cnt);
            }
        }
        return res;
    }
};
