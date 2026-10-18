class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        int start = 0;
        int end = len -1;
        while(start<end) {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
    }
};