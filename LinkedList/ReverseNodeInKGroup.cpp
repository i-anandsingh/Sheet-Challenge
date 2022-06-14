ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* curr = head;
    int cnt = 0;
    while(curr != nullptr and cnt != k){
        curr = curr->next;
        cnt++;
    }
    if(cnt == k){
        curr = reverseKGroup(curr, k);
        while(cnt--){
            ListNode* tmp = head->next;
            head->next = curr;
            curr = head;
            head = tmp;
        }
        head = curr;
    }
    return head;
}