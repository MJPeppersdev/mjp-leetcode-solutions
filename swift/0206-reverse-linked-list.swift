class Solution {
    func reverseList(_ head: ListNode?) -> ListNode? {
        if (head === nil || head?.next === nil) {
            return head
        }
        
        var prev: ListNode? = nil
        var curr = head, next = curr?.next
        
        while curr != nil {
            next = curr?.next
            curr?.next = prev
            prev = curr
            curr = next
        }
        return prev
    }
}