class Solution {
public:
    int merge_find(vector<int>& input, int start, int end){
        if((end-start) > 1){
            int mid = start + (end-start)/2;
            int min, left = merge_find(input,start,mid),right = merge_find(input,mid+1,end);
            if(left > right)
                return right;
            else
                return left;
        }
        else{
            if((end-start)==0)
                return input[end];
            if(input[start]> input[end]){
                return input[end];
            }
            else
                return input[start];
        }

    }
    int findMin(vector<int>& nums) {
        return merge_find(nums,0,nums.size()-1);
    }
};
