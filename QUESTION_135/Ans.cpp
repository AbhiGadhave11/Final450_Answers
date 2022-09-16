class Solution
{
    public:
    Node *Reverse(Node *head)
    {
        Node *current = head;
        Node *pudhacha = NULL;
        Node *magacha = NULL;
        while(current!=NULL)
        {
            pudhacha = current->next;
            current->next = magacha;
            magacha = current;
            current = pudhacha;
            
        }
       // pudhacha = NULL;
        
        return magacha;
    }
    Node* addOne(Node *head) 
    {
        Node *nHead = Reverse(head);
        
        if(nHead->data != 9)
        {
            nHead->data = nHead->data + 1;
             head = Reverse(nHead);
            nHead = NULL;
            return head;
        }
        else if(nHead->data == 9)
        {
           
            Node *temp = nHead;
            int carry = (temp->data+1) / 10;
            temp->data = (temp->data +1) % 10;
            temp = temp->next;
            while(temp!=NULL)
            {
                int no = temp->data;
                temp->data =  (carry + temp->data) % 10;
                carry = (carry + no) / 10;
                temp = temp->next;
            }
            if(carry  > 0)
            {
                head = Reverse(nHead);
                Node *newn = new Node(carry);
                newn->next = head;
                head = newn;
                
                
                return head;
            }
            head = Reverse(nHead);
            nHead = NULL;
            return head;
        }
       
    }
};
