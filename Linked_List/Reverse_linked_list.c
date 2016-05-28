struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* next;
	struct ListNode* prev = NULL;
	struct ListNode* current = head;
	while(current != NULL)
	{
		next = current -> next;
		current -> next = prev;
		prev = current;
		current = next;
	}
	return prev;
}