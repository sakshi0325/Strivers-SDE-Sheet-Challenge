ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL) return NULL;
        ListNode* curr = head;
        int count = 0;

        while(curr!=NULL)
        {
            count++;
            curr = curr->next;
        }

        int len = count-n-1;
        
        curr = head;
        ListNode*prev=head;
        if(len==-1) 
        {
            head = head->next;
            return head;
        }
        while(len--)
        {
            curr=curr->next;
        }

        
        curr->next = curr->next->next;
        
        
        return head;
    }