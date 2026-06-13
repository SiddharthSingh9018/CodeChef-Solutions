class Solution {
public:
    Node* removeDuplicates(Node* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        Node* current = head;
        while (current->next != nullptr) {
            if (current->data == current->next->data) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } else {
                current = current->next;
            }
        }
        return head;
    }
};
