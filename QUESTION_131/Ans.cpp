Node* detectAndRemoveLoop(Node* head)
{
    //Base Case
    if (head == NULL || head->next == NULL)
        return NULL;
 
    Node *slow = head, *fast = head;
    // Move slow and fast 1 and 2 steps
    // ahead respectively.
    slow = slow->next;
    fast = fast->next->next;
    // Search for loop using slow and
    // fast pointers
    while (fast && fast->next) {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }
    // If loop does not exist
    if (slow != fast)
        return NULL;
  
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}
