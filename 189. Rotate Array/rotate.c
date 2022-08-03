void rotate(int* nums, int numsSize, int k){
    int temp;
    
    if(numsSize > 2*104 || numsSize < 1)
        printf("Something is wrong");
    for(int i = 0 ; i < numsSize ; i++){
        if(nums[i] > 231 - 1 || nums[i] <-231)
            printf("Something is wrong");
            break;
    }
    if(k > 105 || k < 0)
        printf("Something is wrong");
      
    for(int i = 0 ; i < k ; i++){
        temp = nums[numsSize-1];
        for(int j = numsSize-1 ; j > 0 ; j-- ){
            nums[j] = nums[j-1];
        }
        nums[0] = temp;
    }
}
