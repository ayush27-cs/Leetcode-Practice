int differenceOfSum(int* nums, int numsSize) {
   int element_sum=0;
    int digit_sum=0;
    for(int i=0;i<numsSize;i++){
        element_sum+=nums[i];
        int temp=nums[i];
        while(temp>0){
            digit_sum+=temp%10;
            temp/=10;
        }
    }
    return abs(element_sum-digit_sum);
}