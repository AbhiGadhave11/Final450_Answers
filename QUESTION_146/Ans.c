//User function Template for C

struct Node* reverseDLL(struct Node * head)
{
    struct Node *pudhacha = NULL;
    struct Node *magacha = NULL;
    struct Node *current = head;
    while(current!=NULL)
    {
        pudhacha = current->next;
        current->next = magacha;
        magacha = current;
        current = pudhacha;
    }
    current = magacha;
    pudhacha = NULL;
   struct Node* temp = magacha;
    while(current!=NULL)
    {
        magacha = current->prev;
        current->prev = pudhacha;
        pudhacha = current;
        current = magacha;
    }
    return temp;
}
