//origin version
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* temp1 ;
    struct ListNode* temp2 ;
    if(head == NULL ) return head;
    else if (head->next == NULL) return head;
    temp1 = head;
    temp2 = head;
    while(1){
        while(temp1->val == temp2->val) {
            temp1 = temp1->next;
            if(temp1 == NULL)break;
        }
        temp2->next = temp1;
        temp2 = temp2->next;
        if(temp2 == NULL) return head;
    }
}

//modified version
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* temp = head;
    if(head == NULL ) return head;
    while(temp->next != NULL)
    {
        if(temp->next->val == temp->val) temp->next = temp->next->next;
        else temp = temp->next; 
    }
    return head;
}