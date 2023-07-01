 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * head;
        while(headA!=NULL)
        {
            head = headB;
            while(head!=NULL)
            {
                if(headA == head) return headA;
                head = head->next;
            }
            headA = headA->next;
        }
        return NULL;
    }