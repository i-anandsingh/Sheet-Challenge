Node* mergeTwoLists(Node* head1, Node* head2){
    if(!head1)
        return head2;
    if(!head2)
        return head1;
    if(head1->val <= head2->val){
        head1->next = mergeTwoLists(head1->next, head2);
        return head1;
    } else{
        head2->next = mergeTwoLists(head1, head2->next);
        return head2;
    }
}