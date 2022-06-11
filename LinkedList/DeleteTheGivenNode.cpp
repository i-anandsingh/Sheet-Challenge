void delete(Node* node){
    node->val = node->next->val;
    node->next = node->next->next;
}