class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // two pointer version
        int count = nums.size(), lp = 0 , rp = nums.size()-1;
        if((nums.size() == 1) && (nums[0] == val))
            return 0;

        while(lp < rp){

            while((nums[rp] == val) && (rp > lp)){
                rp--;
                count--;
            }

            if((nums[lp] == val)){
                swap(nums[lp],nums[rp]);
                lp++;
                rp--;
                count--;
            }
            else{
                lp++;
            } 
        }

        if((lp == rp)&&(nums[lp] == val))
            count--;
        
        
        return count;
        
    }
};
