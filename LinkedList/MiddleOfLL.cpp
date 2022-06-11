ListNode* middle(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast->next and fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    if!fast->next) return slow;
    return slow->next;
}