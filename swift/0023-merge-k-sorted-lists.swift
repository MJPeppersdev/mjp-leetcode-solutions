class Solution {
    func mergeKLists(_ lists: [ListNode?]) -> ListNode? {
        guard lists.contains(where: { $0 != nil }) else { return nil }

        var lists = lists

        while lists.count > 1 {
            var mergedLists = [ListNode?]()

            for i in stride(from: 0, to: lists.count, by: 2) {
                let l1 = lists[i]
                let l2 = (i + 1 < lists.count) ? lists[i + 1] : nil
                mergedLists.append(self.merge(l1: l1, l2: l2))
            }
            lists = mergedLists
        }

        return lists.first!
    }

    func merge(l1: ListNode?, l2: ListNode?) -> ListNode? {
        var dummy = ListNode()
        var tail: ListNode? = dummy 
        var l1 = l1
        var l2 = l2

        while l1 != nil && l2 != nil {
            if l1!.val < l2!.val {
                tail?.next = l1
                l1 = l1?.next
            } else {
                tail?.next = l2!
                l2 = l2?.next
            }
            tail = tail?.next
        }

        if l1 != nil {
            tail?.next = l1
        }
        if l2 != nil {
            tail?.next = l2
        }

        return dummy.next
    }
}
