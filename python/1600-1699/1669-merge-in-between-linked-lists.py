class Solution:
    def mergeInBetween(
        self, list1: ListNode, a: int, b: int, list2: ListNode
    ) -> ListNode:
        p = q = list1
        for _ in range(a - 1):
            p = p.next
        for _ in range(b):
            q = q.next
        p.next = list2
        while p.next:
            p = p.next
        p.next = q.next
        q.next = None
        return list1
