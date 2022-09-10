class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, buy_price, i = 0;
        //find consective decreasing order to determine which day to buy stock
        //find consective increasing order to determine which day to buy stock
        
        while(i < prices.size()-1)
        {
            while(i < prices.size()-1 && prices[i] >= prices[i+1])
            {
                i++;
            }
            
            buy_price = prices[i];
            
            while(i < prices.size()-1 && prices[i] < prices[i+1])
            {
                i++;
            }
            
            ans += prices[i] - buy_price;
        }
        
        return ans;
    }
};
