void rotate(int* nums, int numsSize, int k){
    k = k % numsSize;
    int i = numsSize - k, j = numsSize - 1;
    while(i <= j){
        int k = nums[i];
        nums[i] = nums[j];
        nums[j] = k;
        i++, j--;
    }

    i = 0, j = numsSize - k - 1;
    while(i <= j){
        int k = nums[i];
        nums[i] = nums[j];
        nums[j] = k;
        i++, j--;
    }

    i = 0, j= numsSize - 1;
    while(i <= j){
        int k = nums[i];
        nums[i] = nums[j];
        nums[j] = k;
        i++, j--;
    }

    return nums;
}
