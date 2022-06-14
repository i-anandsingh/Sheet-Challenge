ListNode* front;
bool check(ListNode* back){
    if(back == nullptr)
        return true;
    int isok = (check(back->next) and (back->val == front->val));
    front = front->next;
    return isok;
}

bool isPalindrome(ListNode* head) {
    front = head;
    return check(head);
}   