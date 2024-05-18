class Solution {
    func removeNthFromEnd(_ head: ListNode?, _ n: Int) -> ListNode? {
        if head === nil {
            return head
        }
        var slow = head, fast = head
        for i in 1...n + 1 {
            if (slow === nil) {
                return head?.next
            }
            slow = slow?.next
        }
        
        while slow != nil {
            slow = slow?.next
            fast = fast?.next
        }
        fast?.next = fast?.next?.next
        return head
    }
}