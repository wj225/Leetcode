bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    int bound = (numsSize>=k);
    
    for(int i=0; i<numsSize; i++)
    {
        bound = (i+k>=numsSize-1)? numsSize-1 : i+k;
        for(int j=i+1; j<=bound; j++)
        {
            if(nums[i] == nums[j] && j-i<=k) return true;
        }
    }
    return false;
}

//hash table
