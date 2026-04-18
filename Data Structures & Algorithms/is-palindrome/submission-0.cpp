#include <cwctype>
#include <cctype> 
class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(int i = 0; i < s.length(); i++) {
            if(iswalnum(s[i]))
            str += s[i];
        }
        int j = str.size()-1;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout<<str<<endl;
        for(int i= 0 ; i< str.size()/2; i++){
            if(str[i] != str[j])
            return false;

            j--;
        }
        return true;
    }
};
