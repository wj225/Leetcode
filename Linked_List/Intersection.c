struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* A = headA; 
    struct ListNode* B = headB;
    if(A == NULL || B == NULL) return NULL;
    while(1)
    {
        if(A == B) return A;
        if(A==NULL) A=headA;
        else A = A->next;
        if(B==NULL) B=headB;
        else B = B->next;
    }
}
