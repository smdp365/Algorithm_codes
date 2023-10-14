/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    // FIRST SOLUTION
    // for(int i = 0; i < numbersSize - 1; i++){
        
    //     for(int j = i + 1; j < numbersSize; j++){
    //         // printf("%d,", numbers[i]);
    //         if(numbers[i] + numbers[j] == target){
    //             // int resIndex = 0;
    //             // printf("hi");
    //             result[0] = i + 1;
    //             result[1] = j + 1;
    //             break;
    //         }
    //     }
    // }

    // SECOND SOLUTION
    // int start = 0, end = numbersSize - 1;
    // while(start < end){
    //     int curr_sum = numbers[start] + numbers[end];
    //     if(curr_sum == target){
    //         result[0] = start + 1;
    //         result[1] = end + 1;
    //         break;
    //     }else if(curr_sum < target) start++;
    //     else end--;
    // }

    // THIRD SOLUTION
    for(int i = 0; i < numbersSize - 1; i++){
        int start = i + 1, end = numbersSize - 1;
        while(start <= end){
            int mid = (start + end) / 2;
            if(numbers[i] + numbers[mid] == target){
                result[0] = i + 1;
                result[1] = mid + 1;
                break;
            }else if(numbers[i] + numbers[mid] < target) start = mid + 1;
            else end = mid - 1;
        }
    }

    return result;
    
}
