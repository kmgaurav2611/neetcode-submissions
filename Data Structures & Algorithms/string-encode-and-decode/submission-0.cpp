class Solution {
public:

    string encode(vector<string>& strs) {
        string str;
        for(int i = 0; i< strs.size(); i++){
            str+=strs[i];
            str+='@';
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        string temp = "";
        for(int i = 0; i< s.length(); i++){
            if(s[i] == '@'){
                strs.push_back(temp);
                temp = "";
            }
            else{
                temp+=s[i];
            }
        }
        return strs;
    }
};
