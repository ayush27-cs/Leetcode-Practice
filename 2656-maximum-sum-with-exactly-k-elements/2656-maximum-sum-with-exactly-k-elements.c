int maximizeSum(int* nums, int numsSize, int k) {
    int max_val = nums[0];
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > max_val) {
            max_val = nums[i];
        }
    }
    int total_sum = 0;
    for (int i = 0; i < k; i++) {
        total_sum += max_val;
        max_val++; 
    }
    return total_sum;
} 