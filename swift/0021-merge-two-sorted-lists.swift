class Solution {
    func mergeTwoLists(
        _ list1: ListNode?, 
        _ list2: ListNode?
    ) -> ListNode? {
        var dummyNode: ListNode? = ListNode(-10000)
        var resultNode = dummyNode
        
        var itr1 = list1
        var itr2 = list2
        
        while itr1 != nil && itr2 != nil {
            let v1 = itr1?.val ?? Int.max
            let v2 = itr2?.val ?? Int.max
            
            if v1 < v2 {
                resultNode?.next = itr1
                itr1 = itr1?.next
            } else {
                resultNode?.next = itr2
                itr2 = itr2?.next
            }
            
            resultNode = resultNode?.next
        }
                
        // itr1 is available only
        while itr1 != nil {
            resultNode?.next = itr1
            resultNode = resultNode?.next
            itr1 = itr1?.next
        }
        
        // itr2 is available only    
        while itr2 != nil {
            resultNode?.next = itr2
            resultNode = resultNode?.next
            itr2 = itr2?.next
        }
        
        return dummyNode?.next
    }
}