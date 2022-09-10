class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, minimum = INT_MAX;
        for(int i = 0 ; i < prices.size(); i++)
        {
            minimum = min(minimum,prices[i]);
            ans = max(ans,prices[i]-minimum);
        }
        return ans;
    }
};
