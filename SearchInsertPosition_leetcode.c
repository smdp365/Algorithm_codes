int searchInsert(int* nums, int numsSize, int target){
    int start = 0 ;
    int end = numsSize - 1 ;
    // return end;

    while(start <= end){
        int mid = (start + end) / 2 ;
        if(target == nums[mid]){
            return mid;
        }else if(target < nums[mid]){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    

    // if(start == end){
    //     return (start+1);
    // }
    

    return start;
}

