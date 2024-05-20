object Solution {
    def hasCycle(head: ListNode): Boolean = {
        var (slowPtr, fastPtr) = (head, head)
        
        while (fastPtr != null && fastPtr.next != null) {
            slowPtr = slowPtr.next
            fastPtr = fastPtr.next.next
            
            if (slowPtr eq fastPtr) {
                return true
            }
        }
        
        return false
    }
}