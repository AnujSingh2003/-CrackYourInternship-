ListNode* segregate(ListNode *head) {
    if (!head || !head->next) return head;

    ListNode* dummy0 = new ListNode(0);
    ListNode* dummy1 = new ListNode(0);
    ListNode* dummy2 = new ListNode(0);
    ListNode* zero = dummy0, *one = dummy1, *two = dummy2;
    
    ListNode* curr = head;
    while (curr) {
        if (curr->val == 0) {
            zero->next = curr;
            zero = zero->next;
        } else if (curr->val == 1) {
            one->next = curr;
            one = one->next;
        } else {
            two->next = curr;
            two = two->next;
        }
        curr = curr->next;
    }
    
    zero->next = dummy1->next ? dummy1->next : dummy2->next;
    one->next = dummy2->next;
    two->next = nullptr;
    
    ListNode* sortedHead = dummy0->next;
    delete dummy0;
    delete dummy1;
    delete dummy2;
    
    return sortedHead;
}
