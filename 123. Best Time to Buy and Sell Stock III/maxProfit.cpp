class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty())
            return 0;
        
        vector<int> state = {-prices[0],INT_MIN,INT_MIN,INT_MIN};
        
        for(int i = 1 ; i < prices.size(); i++)
        {
            state[0] = max(state[0],-prices[i]);
            state[1] = max(state[1], state[0] + prices[i]);
            state[2] = max(state[2], state[1] - prices[i]);
            state[3] = max(state[3], state[2] + prices[i]);
        }
        
        return max(0,state[3]);
    }
};
