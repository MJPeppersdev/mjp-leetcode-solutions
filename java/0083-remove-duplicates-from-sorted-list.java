class Solution {

    public ListNode deleteDuplicates(ListNode head) {
        ListNode p = null;
        ListNode q = null;
        ListNode r = head;
        while (r != null) {
            if (q != null && q.val == r.val) {
                r = r.next;
                q.next = r;
            } else {
                p = q;
                q = r;
                r = r.next;
            }
        }
        return head;
    }
}