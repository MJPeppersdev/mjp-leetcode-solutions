struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *fast = head;
    struct ListNode *slow = head;

    if (!head)
        return NULL;

    while (fast->next && fast->next->next) {
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow) {
            /**
             * The index of the node cycle is located the same number of nodes
             * away from the start of the linked list and the intersection of
             * the slow and fast pointers.
             */
            struct ListNode *head_node = head;
            struct ListNode *intersection = slow;

            while (head_node != intersection) {
                head_node = head_node->next;
                intersection = intersection->next;
            }

            return intersection;
        }
    }

    return NULL;
}
