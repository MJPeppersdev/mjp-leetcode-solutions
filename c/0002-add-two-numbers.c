struct ListNode* newNode(int val) {
    struct ListNode* node = (struct ListNode*) malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
        
    return node;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* head = NULL;
    struct ListNode* curr = NULL;

    int carry = 0;

    while (l1 || l2) {
        int sum = carry;

        if (l1)
            sum += l1->val;
        if (l2)
            sum += l2->val;

        carry = sum/10;
        sum %= 10;

        if (head == NULL) {
            head = newNode(sum);
            curr = head;
        } else {
            curr->next = newNode(sum);
            curr = curr->next;
        }

        if (l1)
            l1 = l1->next;
        if (l2)
            l2 = l2->next;
    }

    if (carry) 
        curr->next = newNode(carry);
        

    return head;
}