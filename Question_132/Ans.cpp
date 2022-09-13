// Remove Duplicates From Sorted Linked List

class GfG
{
    //Function to remove duplicates from sorted linked list.
    Node removeDuplicates(Node head)
    {
        Node dummy = null;
        dummy = new Node(-1);
        Node itr = dummy;
        Node current = head;
        while(current!=null)
        {
            if(itr.data == current.data)
            {
                current = current.next;
                itr.next = null;
                continue;
            }
            itr.next = current;
            itr = itr.next;
            current = current.next;
            
        }
        return dummy.next;
    }
}
