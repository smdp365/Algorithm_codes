class Solution {

public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> originalNums = nums;
        mergeSort(nums, 0, nums.size()-1);

        vector<int> result(2);
        int firstVal;
        int secondVal;

        int i = 0, j = nums.size() - 1;

        while(i < j){
            if(nums[i] + nums[j] > target){
                j--;
            }
            else if(nums[i] + nums[j] < target){
                i++;
            }
            else{
                firstVal = nums[i];
                secondVal = nums[j];
                break;
            }

        }

        for(int i = 0; i < originalNums.size(); i++){
            if(originalNums[i] == firstVal){
                result[0] = i;
                break;
            }
        }

        for(int i = 0; i < originalNums.size(); i++){
            if(originalNums[i] == secondVal && result[0] != i){
                result[1] = i;
                break;
            }
        }

        return result;
    }


    //Function to sort the nums array
    //begin is for left index and 
    //end is for right index for the subarray
    //of nums to be sorted
    void mergeSort(vector<int>& nums, int begin, int end) {
        if(begin >= end){
            return;
        }

        int mid = begin + (end - begin) / 2;
        mergeSort(nums, begin, mid);
        mergeSort(nums, mid+1, end);
        merge(nums, begin, mid, end);
    }


    //Function to merge two arrays
    void merge(vector<int>& nums, int left, int mid, int right) {
        //size for left sub array
        int leftSize = mid-left+1;
        //size for right sub array
        int rightSize = right - mid;

        //temporary left sub array
        vector<int> leftSubArray(leftSize);
        //temporary right sub array
        vector<int> rightSubArray(rightSize);

        //copying data to temporary leftSubArray and rightSubArray
        for(int i = 0; i < leftSize; i++){
            leftSubArray[i] = nums[left+i];
        }

        for(int j = 0; j < rightSize; j++){
            rightSubArray[j] = nums[mid+1+j];
        }

        //index for leftSubArray
        int indexLeft = 0;
        //index for rightSubArray
        int indexRight = 0;
        //index for mergedSortedArray
        int indexMergedSortedArray = left;

        //merging leftSubArray and rightSubArray back into nums
        while(indexLeft < leftSize && indexRight < rightSize){
            if(leftSubArray[indexLeft] <= rightSubArray[indexRight]){
                nums[indexMergedSortedArray] = leftSubArray[indexLeft];
                indexLeft++;
            }
            else{
                nums[indexMergedSortedArray] = rightSubArray[indexRight];
                indexRight++;
            }

            indexMergedSortedArray++;
        }

        //Copying the remaining elements of leftSubArray , if there is any
        while(indexLeft < leftSize){
            nums[indexMergedSortedArray] = leftSubArray[indexLeft];
            indexLeft++;
            indexMergedSortedArray++;
        }

        //Copying the remaining elements of the rightSubArray, if there is any
        while(indexRight < rightSize){
            nums[indexMergedSortedArray] = rightSubArray[indexRight];
            indexRight++;
            indexMergedSortedArray++;
        }

    }


};
