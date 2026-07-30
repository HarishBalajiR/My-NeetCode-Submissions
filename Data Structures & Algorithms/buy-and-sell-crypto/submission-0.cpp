class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int N = prices.size();
        int minbuy = prices[0], maxprofit = 0;
        for(int index = 1 ; index < N ; index++){
            
            maxprofit = max(maxprofit,prices[index] - minbuy);
            minbuy = min(minbuy,prices[index]);
        }
        return maxprofit;
    }
};
