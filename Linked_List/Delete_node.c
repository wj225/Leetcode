void deleteNode(struct ListNode* node) {
	struct ListNode* temp = node->next;
    node->val = node->next->val;
    node->next = node->next->next;
    free(temp);
}