int* twoSum(int* nums, int numsSize, int target){
	int* dest = (int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1; j<numsSize;j++)
        {
            if(nums[j]+nums[i]==target)
            {
                dest[0] = i;
                dest[1] = j;
                return dest;
            }
        }
    }
    return NULL;
}