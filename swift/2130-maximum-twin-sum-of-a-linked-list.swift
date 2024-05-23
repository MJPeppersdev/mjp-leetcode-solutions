class Solution {
    func pairSum(_ head: ListNode?) -> Int {
        var slow = head
        var fast = head
        var prev: ListNode?
        while fast != nil && fast?.next != nil {
            fast = fast?.next?.next
            var tmp = slow?.next
            slow?.next = prev
            prev = slow
            slow = tmp
        }
        var res = 0
        while slow != nil {
            res = max(res, prev!.val + slow!.val)
            prev = prev?.next
            slow = slow?.next
        }
        return res
    }
}