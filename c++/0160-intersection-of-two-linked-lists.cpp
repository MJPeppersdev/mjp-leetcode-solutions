class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *trevA = headA, *trevB = headB;

        while (trevA != trevB) {
            trevA = (trevA != NULL) ? trevA->next : headA;
            trevB = (trevB != NULL) ? trevB->next : headB;
        }
        return trevA;
    }
};
