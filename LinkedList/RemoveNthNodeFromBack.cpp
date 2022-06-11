Node* deleteNthNode(Node* head, int n){
    Node* dummy = new Node();
    dummy->next = head;
    Node* fast = dummy;
    Node* slow = dummy;
    while(n--)
        fast = fast->next;
    while(fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;
    return dummy->next;
}