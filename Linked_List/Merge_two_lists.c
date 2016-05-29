struct ListNode{
	int val;
	struct ListNode* next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
	struct ListNode* head;
    struct ListNode* temp;
    
    if(l1 == NULL && l2 == NULL) return NULL;
    else if(l1 == NULL) return l2;
    else if(l2 == NULL) return l1;
    
    if(l1->val >= l2->val){
        head = l2;
        l2 = l2->next;
    } 
    else{
        head = l1;
        l1 = l1->next;
    }
    temp = head;
    
    while(l1!=NULL && l2!=NULL){
        if(l1->val >= l2->val)
        {
            temp->next = l2;
            l2 = l2->next;
            temp = temp->next;
        }
        else
        {
            temp->next = l1;
            l1 = l1->next;
            temp = temp->next;
        }
    }
    if(l1 == NULL) temp->next = l2;
    else if(l2 == NULL)temp->next = l1;
    return head;
}
