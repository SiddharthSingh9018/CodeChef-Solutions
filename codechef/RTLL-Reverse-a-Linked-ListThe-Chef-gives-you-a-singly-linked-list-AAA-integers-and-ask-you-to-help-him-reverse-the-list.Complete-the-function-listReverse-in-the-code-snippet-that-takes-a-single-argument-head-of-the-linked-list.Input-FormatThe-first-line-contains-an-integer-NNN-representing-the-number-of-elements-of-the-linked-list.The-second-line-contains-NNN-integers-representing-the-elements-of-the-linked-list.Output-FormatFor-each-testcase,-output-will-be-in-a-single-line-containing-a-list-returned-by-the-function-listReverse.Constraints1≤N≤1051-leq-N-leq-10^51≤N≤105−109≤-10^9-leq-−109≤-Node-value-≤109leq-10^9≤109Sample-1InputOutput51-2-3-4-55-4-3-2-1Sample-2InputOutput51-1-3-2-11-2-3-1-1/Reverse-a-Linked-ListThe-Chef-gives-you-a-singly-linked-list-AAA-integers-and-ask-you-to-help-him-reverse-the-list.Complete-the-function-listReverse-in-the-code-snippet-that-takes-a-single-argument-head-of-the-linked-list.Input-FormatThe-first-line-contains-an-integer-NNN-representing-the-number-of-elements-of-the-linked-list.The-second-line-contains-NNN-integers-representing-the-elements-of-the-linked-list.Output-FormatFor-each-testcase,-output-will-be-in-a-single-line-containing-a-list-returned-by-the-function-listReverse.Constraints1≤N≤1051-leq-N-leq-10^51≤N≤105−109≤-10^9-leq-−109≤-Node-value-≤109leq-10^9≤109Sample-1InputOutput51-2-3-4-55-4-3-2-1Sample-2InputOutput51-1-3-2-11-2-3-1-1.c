his->data = data;
        next = NULL;
    }
};*/

Node* reverseList(Node* head) {
    Node *cur, *prev, *newnode;
    cur=head;
    prev=NULL;
    while(cur!=NULL)
    {
       newnode= cur->next;
        cur->next = p