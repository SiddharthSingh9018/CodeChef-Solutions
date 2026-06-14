// struct Node {
//     int data;
//     Node* next;
//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

Node* deleteMiddle(Node* head) {
    //write code here...
    if(!head || !head->next) return NULL;
    Node* slow = head;
    Node* fast = head;
    Node* prev = NULL;
    while (fast && fast->next){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = slow->next;
    delete slow;
    return head;
}

void printList(Node* head){
    if(!head) cout << -1 << endl;
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
