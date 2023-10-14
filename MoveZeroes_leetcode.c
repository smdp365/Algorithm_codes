void moveZeroes(int* nums, int numsSize){
    int ptr = 0;
    while(ptr != numsSize - 1){
        if(nums[ptr] == 0){
            int nxtPtr = ptr + 1;
            while(nums[nxtPtr] == 0 && nxtPtr != numsSize - 1){
                nxtPtr++;
            }
            nums[ptr] = nums[nxtPtr];
            nums[nxtPtr] = 0;
        }
        ptr++;
    }

    return nums;
}


//---------------------------------------------------------------------------------

// void moveZeroes(int* nums, int numsSize){
//     int ptr = 0;
//     while(ptr != numsSize - 1){
//         if(nums[ptr] == 0){
//             int nxtPtr = ptr + 1;
//             while(nums[nxtPtr] == 0 && nxtPtr != numsSize - 1){
//                 nxtPtr++;
//             }
//             nums[ptr] = nums[nxtPtr];
//             nums[nxtPtr] = 0;
//         }
//         ptr++;
//     }

//     return nums;
// }
