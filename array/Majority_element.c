int majorityElement(int* nums, int numsSize) {
    int cnt = 1;
    int maj = nums[0];
    for(int i=1; i<numsSize ; i++)
    {
        if(cnt == 0) maj = nums[i];
        if(nums[i] == maj) cnt++;
        else cnt--;
    }
    return maj;
}