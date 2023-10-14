int search(int* nums, int numsSize, int target){
    int low = 0;
    int high = numsSize-1;
    // if(numsSize == 1 && target == nums[low]) {return low;}
    // else return -1;
    while(low <= high){
        int mid = floor((low + high)/2);
        if(target == nums[mid]) {return mid;}
        else if(target > nums[mid]){ low = mid + 1;}
            else high = mid - 1  ;
    }

    return -1;
}
