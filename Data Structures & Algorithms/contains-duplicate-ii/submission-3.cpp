class Solution {
   public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // int size = nums.size();

        // for (int i = 0; i < size - k; i++) {
        //     set<int> temp;
        //     for (int j = i; j <= i + k; j++) {
        //         temp.insert(nums[j]);
        //     }
        //     // for (auto x : temp) cout << x << " ";
        //     // cout<<endl;

        //     if (temp.size() != k+1) return true;
        // }
    

        // return false;

        int n = nums.size();

        unordered_set<int> st;

        int i=0, j=0;

        while(j<n) {
            // step 1
            if(abs(i-j) > k) {
                st.erase(nums[i]);
                i++;
            }

            // past me dekha hai nums
            if(st.find(nums[j]) != st.end()){
                return true;
            }

            st.insert(nums[j]);
            j++;
        }

        return false;
    }
};