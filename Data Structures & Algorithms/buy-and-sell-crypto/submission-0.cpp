class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int prevPrice = prices[0];
        for(int i =1; i< prices.size(); i++) {
            if(prices[i] > prevPrice){
                maxProfit  = max(maxProfit, prices[i] - prevPrice);
            }
            else{
                prevPrice = prices[i];
            }
        }
        return maxProfit;
    }
};
