class Solution {
public:
    ListNode* swapPairs(ListNode* head) {  
        if (!head || !head->next) 
            return head;

        ListNode *new_head = head->next;
        ListNode *prev = NULL;

        while (head && head->next) {
            ListNode *next_pair = head->next->next;
            ListNode *second = head->next;

            if (prev)
                prev->next = second;

            second->next = head;
            head->next = next_pair;

            prev = head;
            head = next_pair;
        }
        return new_head;
    }
};
