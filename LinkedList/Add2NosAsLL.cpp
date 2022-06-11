Node* addNodes(Node* l1, Node* l2){
    Node* dummy = new Node(0);
    Node* curr = dummy;
    int carry = 0, sum = 0;
    while(l1 or l2){
        int x = (l1 ? l1->val : 0);
        int y = (l2 ? l2->val : 0);
        sum = x + y + carry;
        carry = sum / 10;
        sum %= 10;
        curr->next = new Node(sum%10);
        curr = curr->next;
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
    }
    if(carry>0)
        curr->next = new Node(carry);
    return dummy->next;
}