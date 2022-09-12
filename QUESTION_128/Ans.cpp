class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node *fast = head;
        Node *slow = head;
        bool flag = false;
        while((fast!=NULL)&&(fast->next!=NULL)&&(slow!=NULL))
        {
            fast = fast->next->next;
            slow = slow->next;
            
            if(fast == slow)
            {
                flag = true;
                break;
            }
        }
        return flag;
    }
};
