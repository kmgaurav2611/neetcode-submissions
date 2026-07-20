class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int initial = prices[0];
       int result = 0;
       for(int i =1; i< prices.size(); i++) {
        if(prices[i] <= initial)
        {
            initial = prices[i];
        }
        else{
            int diff = prices[i] - initial;
            result+= diff;
            initial = prices[i];
        }
       }

       return result; 
    }
};