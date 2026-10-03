/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    long long xorSum=0;
    int num1=0,num2=0;
    for(int i=0;i<numsSize;i++){
        xorSum ^=nums[i];
    }
    long long diff =xorSum & (-xorSum);
    for(int i=0;i<numsSize;i++){
        if(nums[i]&diff){
            num1^=nums[i];
        }
        else {
            num2 ^=nums[i];
        }
    }
    int *result =(int*)malloc(2*sizeof(int));
    result[0]=num1;
    result[1]=num2;
    *returnSize=2;
    return result;;
}