struct ListNode* swapPairs(struct ListNode* head) {
    if (head == NULL || head->next == NULL) 
        return head;

    struct ListNode *new_head = head->next;
    struct ListNode *prev = NULL;

    while (head != NULL && head->next != NULL) {
        struct ListNode *next_pair = head->next->next;
        struct ListNode *second = head->next;

        if (prev != NULL)
            prev->next = second;

        second->next = head;
        head->next = next_pair;

        prev = head;
        head = next_pair;
    }

    return new_head;
}