class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int lp = 0 , rp = n-1, mid = lp + (rp-lp)/2;
        if(n == 1)
            return nums[0];
        
        // The vector hasn't been rotated.
        if(nums[0]<nums[n-1])
            return nums[0];
        
        // Binary search
        while(lp < rp){
            mid = lp + (rp-lp)/2;
            if(nums[mid] > nums[rp])
                lp = mid+1;
            else if(nums[mid] < nums[lp])
                rp = mid;
            else return nums[lp];
        }
        return nums[lp];
    }
};
