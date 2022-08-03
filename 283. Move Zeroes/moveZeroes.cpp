class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = INT_MAX; // an index to present the currnet zero(which one to switch)
        int scan = 0;
        
        while(scan != nums.size())
        {
            if(nums.at(scan) == 0 && scan < index)
            {
                index = scan;
            }
            else if(nums.at(scan) != 0 && index != INT_MAX)
            {
                swap(nums.at(scan),nums.at(index));
                swap(index,scan);
                
            }
            scan ++;
        }
    }
};
