object Solution {
    def reverseList(head: ListNode): ListNode = {
        if (head == null || head.next == null) {
            return head
        }
        
        val reversedListHead = reverseList(head.next)
        head.next.next = head
        head.next = null
        
        return reversedListHead
    }
}