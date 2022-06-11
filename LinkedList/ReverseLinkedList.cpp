LinkedListNode<int> reverse(LinkedListNode<int> *head){
    LinkedListNode *curr = head;
    LinkedListNode *prev = null;
    LinkedListNode *nxt = null;
    while(curr){
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}