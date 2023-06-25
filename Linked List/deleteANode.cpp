void deleteNode(ListNode* node) {
        node->val = node->next->val;
        if (node->next->next == NULL)
        {
            node->next = NULL;
        }
        else
        {
            node->next = node->next->next;
        }
    }