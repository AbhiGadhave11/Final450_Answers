class Solution:
    def divide(self, N, head):
        Evendummy =  node();
        Evendummy.data = -1;
        Evenptr = Evendummy;
        Odd_dummy = node()
        Odd_dummy.data = -1;
        Oddptr = Odd_dummy
        current = head;
        while(current!=None):
        
            if(current.data % 2 == 0):
            
                Evenptr.next = current;
                Evenptr = Evenptr.next;
            
            else:
            
                Oddptr.next = current;
                Oddptr = Oddptr.next;
            
            current = current.next;
        
        Oddptr.next = None;
        Evenptr.next = Odd_dummy.next;
        return Evendummy.next;
        
