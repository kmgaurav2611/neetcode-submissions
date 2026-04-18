class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26, 0);

        for(int i = 0; i< s.length(); i++){
            count[s[i] - 'a']++;
          
        }
        for(int j =0; j< t.length(); j++){
  count[t[j] - 'a']--;
        }

        bool res;
        for(int j =0 ; j< count.size(); j++){
            if(count[j] !=0)
            return false;
        }
        return true;
    }
};
