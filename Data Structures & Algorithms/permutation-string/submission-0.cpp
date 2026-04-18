class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(), s1.end());
        int n1 = s1.length(), n2 = s2.length();
        if(n1 > n2) return false;

        for(int i = 0; i <= n2 - n1; i++) {
            string substring = s2.substr(i, n1);
            string sortedSub = substring;  // explicit copy for sorting
            sort(sortedSub.begin(), sortedSub.end());
            if(s1 == sortedSub) return true;
        }
        return false;
    }
};
