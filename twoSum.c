/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    for(int i = 0;i < numsSize ; i++){
        for(int j = 0 ; j < numsSize ; j++){
            if(i == j){continue;}
            else if(nums[i]+nums[j] == target){
                    *returnSize = 2;
                    int *result = (int*)malloc(2 * sizeof(int));
                    result[0] = i;
                    result[1] = j;
                    return result;
                }
        }
    }
    return NULL;
}
