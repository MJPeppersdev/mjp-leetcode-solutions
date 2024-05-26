class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode *fast = head, *slow = head;

        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow = reverseList(slow);
        
        int mx = 0;
        while(head && slow) {
            mx = max(mx, head->val + slow->val);
            head = head->next;
            slow = slow->next;
        }
        
        return mx;
    }
private:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* NEXT = NULL;
        
        while(curr) {
            NEXT = curr->next;
            curr->next = prev;
            prev = curr;
            curr = NEXT;
        }
        
        return prev;
    }
};
