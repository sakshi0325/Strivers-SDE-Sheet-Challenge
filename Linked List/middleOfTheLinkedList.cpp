ListNode* middleNode(ListNode* head) {
       int count=0;
       ListNode* curr = head;
       while(curr!=NULL)
       {
           curr=curr->next;
           count++;
       }
       cout << count;
       int i=0;
       curr=head;
       while(i!=count/2)
       {
           curr=curr->next;
           i++;
       }
       //if(count%2==0) return curr->next;
       return curr;
    }