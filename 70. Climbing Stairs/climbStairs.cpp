class Solution {
public:
    int climbStairs(int n) {
        if(n < 3)
            return n;
        vector<int> estimate(n+1);
        estimate[1] = 1;
        estimate[2] = 2;
        for(int i = 3; i <= n ; i++){
            estimate[i] = estimate[i-1]+estimate[i-2];
        }
        return estimate[n];
    }
};
