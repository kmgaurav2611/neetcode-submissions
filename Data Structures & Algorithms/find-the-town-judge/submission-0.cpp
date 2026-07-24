class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int first = trust[0][1];

        for(int i =1; i< trust.size(); i++) {
            if(trust[i][1] != first)
            return -1;
        }

        for(int i = 1; i< trust.size(); i++) {
            if(trust[i][0] == first)
            return -1;
        }

        return first;
    }
};