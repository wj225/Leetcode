//error: out of time
void rotate(int* nums, int numsSize, int k) {
    int temp;
    for(int i=0;i<k;i++)
    {
        temp = nums[numsSize-1];
        for(int j=0; j<numsSize-1; j++)
        {
            nums[numsSize-1-j] = nums[numsSize-2-j];
        }
        nums[0] = temp;
    }
}

// get the remainder, then execute three reversions
void rotate(int* nums, int numsSize, int k) {
    int temp;
    k = k % numsSize;
    for(int i=0; i<numsSize/2; i++)
    {
        temp = nums[i];
        nums[i] = nums[numsSize-1-i];
        nums[numsSize-1-i] = temp;
    }
    for(int i=0; i<k/2; i++)
    {
        temp = nums[i];
        nums[i] = nums[k-1-i];
        nums[k-1-i] = temp;
    }
    for(int i=0; i<(numsSize-k)/2; i++)
    {
        temp = nums[i+k];
        nums[i+k] = nums[numsSize-1-i];
        nums[numsSize-1-i] = temp;
    }
}