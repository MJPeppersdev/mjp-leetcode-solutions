class Solution {
    func middleNode(_ head: ListNode?) -> ListNode? {
        var current = head
        var middle = head
        while let next = current?.next {
            current = next.next
            middle = middle?.next
        }
        return middle
    }
}