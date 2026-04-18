class Solution {
public:
    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string out;
        for (auto& s : strs) {
            out += to_string(s.size()) + "#" + s;  // length + '#' + content
        }
        return out;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> res;
        
        int i = 0;
        while (i < (int)s.size()) {
            int j = i;
            // find delimiter '#'
            while (s[j] != '#') j++;
            int len = stoi(s.substr(i, j - i)); // length
            j++;                                // move past '#'
            res.push_back(s.substr(j, len));    // extract string
            i = j + len;                        // move to next block
        }
        return res;
    }
};
