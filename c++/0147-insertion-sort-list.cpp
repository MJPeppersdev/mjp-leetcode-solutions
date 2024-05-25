class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if(head == NULL || head -> next == NULL) {
            return head;
        }

        ListNode *ptr1 = head -> next, *sortedPtr = head;
        while(ptr1 != NULL) {
            if(ptr1 -> val < sortedPtr -> val) {
                ListNode *ptr2 = head, *lagPtr = head;
                while(true) {
                    if(ptr2 -> val > ptr1 -> val) {
                        if(ptr2 == head) {
                            sortedPtr -> next = ptr1 -> next;
                            ptr1 -> next = head;
                            head = ptr1;
                            ptr1 = sortedPtr -> next;
                            break;
                        }
                        else {
                            sortedPtr -> next = ptr1 -> next;
                            ptr1 -> next = ptr2;
                            lagPtr -> next = ptr1;
                            ptr1 = sortedPtr -> next;
                            break;
                        }
                    }
                    lagPtr = ptr2;
                    ptr2 = ptr2 -> next;
                }
                
            } else {
                sortedPtr = sortedPtr -> next;
                ptr1 = ptr1 -> next;
            }
        }

        return head;
    }
};
