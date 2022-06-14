bool hasCycle(ListNode *head) {
    if(!head || !head->next)   return false;
    ListNode* sptr = head;
    ListNode* fptr = head;
    while(fptr && fptr->next){
        sptr = sptr -> next;
        fptr = fptr -> next -> next;
        if(sptr == fptr){
            return true;
        }
    }
    return false;
}