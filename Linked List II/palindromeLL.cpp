bool res = true;
 bool traverse(ListNode* head, ListNode* r_head)
 {
    if(head==NULL) return res;
    if(head->val != r_head->val) {
        res = false;
    }
    traverse(head->next, r_head->next);
    return res;
 }
    bool isPalindrome(ListNode* head) {
       if(head == NULL || head->next == NULL){
           return head;
       }
       ListNode* r_head = NULL;
       ListNode* ptr = head;
       while(ptr!=NULL){
           ListNode* temp = new ListNode(ptr->val);
           temp->next = r_head;
           r_head = temp;
           ptr = ptr->next;
       }
       return traverse(head, r_head);
       
    }