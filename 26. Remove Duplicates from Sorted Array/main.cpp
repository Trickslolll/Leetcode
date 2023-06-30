class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // index is the next element to be swapped
        // now is used to compare with nums[next]
        // k is the return value
        int index = 1, now = nums[0], next = 1, k = 1;
        
        if(nums.size() == 1)
            return 1;

        while(next < nums.size()){
            if(nums[next] != now){
                now = nums[next];
                swap(nums[next],nums[index]);
                index++;
                k++;
            }
            next++;
        }
        return k;
    }
};
