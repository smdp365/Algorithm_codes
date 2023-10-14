/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int start = 0, end = numsSize - 1, resIndex = numsSize - 1;
    
    int* result = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    while(start <= end){
        if(-nums[start] > nums[end]){
            result[resIndex--] = nums[start] * nums[start];
            start++;
        }else{
            result[resIndex--] = nums[end] * nums[end];
            end--;
        }
    }

    return result;

}
