class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int amount = cost.size(); //10
        vector<int> total(amount);
        total[0] = 0;
        total[1] = 0;
        for (int i = 2; i < amount; i++) {
            total[i] = min(total[i - 1] + cost[i - 1], total[i - 2] + cost[i - 2]);
        }

        return min(total[amount-1] + cost[amount-1], total[amount-2] + cost[amount-2]);
    }
};
