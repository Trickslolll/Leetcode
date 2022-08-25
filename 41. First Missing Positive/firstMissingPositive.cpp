class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        unordered_set<int> record;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > 0)
            {
                record.insert(nums[i]); // push vaild data into unordered_set
            }
        }
        
        for(int i = 1;;i++)
        {
            if(record.count(i) == 0) // finds which positive numbers doesn't exist.
                return i;
        }
    }
};
