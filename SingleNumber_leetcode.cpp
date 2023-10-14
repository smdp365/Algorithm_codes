int singleNumber(int* nums, int numsSize){
    int result = nums[0];
    for(int i = 1; i <= numsSize - 1; i++){
        result ^= nums[i];   
    }
    return result;
}

//idea of the above code is exor or two same number is 0.
//and exor of 0 and any number is that number only .
//so all duplicate number's exor will result 0 and 0 exor with that "single number" will result
//that "single number" only. Which is the answer.



