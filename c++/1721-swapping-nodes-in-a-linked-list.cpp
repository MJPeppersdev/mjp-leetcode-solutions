class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL) 
            return head;

        ListNode *ptr = head, *beg = head, *end = head;
        int a = 0;
        while(ptr != NULL) {
            a++;
            if(a == k) 
                beg = ptr;
            if(a >= k + 1) 
                end = end -> next;
            ptr = ptr -> next;
        }
        int temp = beg -> val;
        beg -> val = end -> val;
        end -> val = temp;
        return head;
    }
};
