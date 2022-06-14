ListNode *detectCycle(ListNode *head) {
    if(!head or !head->next)   return NULL;
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast and fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)    break;
    }
    if(slow == fast){
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return fast;
    }
    return NULL;
}