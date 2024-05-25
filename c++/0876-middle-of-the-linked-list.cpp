class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode *slow_pointer = head, *fast_pointer = head;
        while (fast_pointer != NULL && fast_pointer->next != NULL) {
            slow_pointer = slow_pointer->next;
            fast_pointer = fast_pointer->next->next;
        }
        return slow_pointer;
    }
};
