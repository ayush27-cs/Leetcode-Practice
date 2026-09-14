void moveZeroes(int* nums, int numsSize) {
       int left =0;
       for(int right =0;right<numsSize;right++){
        if(nums[right]!=0){
            nums[left]=nums[right];
            left++;
        }
       }
       while(left<numsSize){
        nums[left]=0;
        left++;
       }
}