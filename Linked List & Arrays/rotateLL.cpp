ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0 || head==NULL || head->next==NULL) return head;
        int count = 1;
        ListNode* curr = head;
        ListNode* res;
        
        while(curr->next!=NULL)
        {
            curr = curr->next;
            count++;
        }
        k = k % count;
        if(k==0) return head;
        curr->next = head;
        k = count-k;
        while(k--) curr = curr->next;
        res = curr->next;
        curr->next = NULL;
        return res;
    }   