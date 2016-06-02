struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* H = head;
    struct ListNode* A = l1;
    struct ListNode* B = l2;
    int carry = 0;
    while(A || B)
    {
        struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        head->next = temp;
        temp->val = 0;
        if(A){
            temp->val += A->val;
            A = A->next;
        }
        if(B){
            temp->val += B->val;
            B = B->next;
        }
        temp->val += carry;
        carry = temp->val/10;
        temp->val = temp->val % 10;
        head = temp;
    }
    if(carry)
    {
        struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
        head->next = temp;
        temp->val  = carry;
        temp->next = NULL;
    }
    else head->next = NULL;

    return H->next;
}