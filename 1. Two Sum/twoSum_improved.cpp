class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> check;  // value,position
        vector<int> ans(2);
        for(int i = 0; i < nums.size(); i++)
        {
            if(check.count(nums[i]))
            {
                ans[0] = i;
                ans[1] = check[nums[i]];
                break;
            }
            else
                check[(target - nums[i])] = i;
        }
        
        return ans;
    }
};
