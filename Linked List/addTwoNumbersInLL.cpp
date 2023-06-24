ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = new ListNode(0);
        ListNode *ptr = res;

        int carry = 0;
        while(l1!=NULL || l2!=NULL)
        {
            int sum = 0+carry;
            if(l1!=NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum/10;
            ptr->next = new ListNode(sum%10);
            ptr = ptr->next;
        } 
        if(carry==1) ptr->next = new ListNode(1);
        return res->next;
    }