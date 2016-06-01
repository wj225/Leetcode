/*swap one element through all other elements to the end:
 *should double check the current place
*/
int removeElement(int* nums, int numsSize, int val) {
    int temp;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i] == val)
        {
            for(int j=i; j< numsSize-1;j++)
            {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
            numsSize--;
            i--; //double check
        }
    }
    return numsSize;
}

int removeElement(int A[], int n, int elem) {
    int begin=0;
    for(int i=0;i<n;i++) if(A[i]!=elem) A[begin++]=A[i];
    return begin;
}

int removeElement(int A[], int n, int elem) {
    int i = 0;
    while (i < n) {
        if (A[i] == elem) {
            A[i] = A[n - 1];
            n--;
        }
        else
            i++;
    }
    return n;
}