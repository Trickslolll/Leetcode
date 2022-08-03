class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = INT_MIN;
        int temp = 0;
        for(int i = 0; i < accounts.size(); i++)
        {
            for(int j = 0 ; j < accounts.at(i).size() ; j++)
            {
                temp += accounts[i][j];
            }
            if(temp > max)
            {
                max = temp;
            }
            temp = 0;
        }
        return max;
    }
};
