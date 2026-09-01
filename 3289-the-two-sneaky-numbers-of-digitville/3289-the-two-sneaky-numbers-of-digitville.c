/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int* ans =(int*)malloc(2* sizeof(int));
    int freq[105]={0};
    int count = 0;
    for(int i=0;i<numsSize;i++){
        if(freq[nums[i]] == 1){
            ans[count++]=nums[i];
        }
        freq[nums[i]]++;
    }
    *returnSize = 2;
    return ans;
}