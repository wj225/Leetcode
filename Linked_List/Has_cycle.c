bool hasCycle(struct ListNode *head) {
    struct ListNode* A = head;
    struct ListNode* B = head;
    while(A!=NULL && A->next!=NULL)
    {
        A = A->next->next;
        B = B->next;
        if(A == B) return true;
    }
    return false;
}