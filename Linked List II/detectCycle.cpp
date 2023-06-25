bool hasCycle(ListNode *head) {

        ListNode *curr = head;
        ListNode *temp = new ListNode(0);
        ListNode *curr_next = NULL;

        while (curr !=NULL)
        {
            if (curr->next == NULL)
            {
                return false;
            }
            if (curr->next == temp)
            {
                return true;
            }

            curr_next = curr->next;
            curr->next = temp;
            curr = curr_next;
        }
        return false;

    }