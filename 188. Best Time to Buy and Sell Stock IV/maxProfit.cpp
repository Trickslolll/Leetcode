class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        
        if(prices.empty() || k == 0)
            return 0;
        
        vector<int> state(k*2,INT_MIN); // k*2 elements, initial value = INT_MIN
        state[0] = -prices[0];
        
        for(int i = 1; i < prices.size(); i++)
        {
            state[0] = max(state[0],-prices[i]);
            int temp = 1;
            for(int j = 1; j < state.size(); j++)
            {
                state[j] = max(state[j], state[j-1] + prices[i]*temp);
                temp *= -1;
            }
        }
        
        return max(0,state[k*2-1]);
    }
};
