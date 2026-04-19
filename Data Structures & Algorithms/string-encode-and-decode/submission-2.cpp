class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.empty()) return "";
        string res = "";
        for(int i =0; i< strs.size(); i++) {
            res += to_string(strs[i].length());
            res+= ",";
        }
        res+="#";
        for(int i = 0; i<strs.size(); i++) {
            res+= strs[i];
        }
        return res;
    }

    vector<string> decode(string s) {
         if (s.empty()) return {};
        vector<int> sizes;
        vector<string> res;
        int i=0;
        while(s[i] != '#'){
            string curr = "";
            while(s[i]!= ','){
                curr+= s[i];
                i++;
            }
            sizes.push_back(stoi(curr));
            i++;
        }
        i++;
        for(int sz: sizes){
            res.push_back(s.substr(i,sz));
            i+=sz;
        }
        return res;
    }
};
