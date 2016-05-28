struct ListNode{
	int value;
	struct ListNode* next
};
/*linked list remove has two occasion:
 * 1. delete head (return head->next)
 * 2. delete others (travel through)
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* ref = head;
	struct ListNode* del = head;
	struct ListNode* temp;
	while(n--) ref = ref->next;
	if(ref == NULL) return head->next;
	while (ref->next != NULL)
	{
		ref = ref->next;
		del = del->next;
	}
	temp = del->next;
	del->next = del->next->next;
	free(temp);
	return head;
}