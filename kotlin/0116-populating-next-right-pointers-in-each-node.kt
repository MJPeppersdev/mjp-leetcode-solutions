class Solution {
    fun connect(root: Node?): Node? {
        var cur = root
        var next = cur?.left

        while (cur != null && next != null) {
            cur?.left?.next = cur?.right
            if (cur?.next != null)
                cur?.right?.next = cur?.next?.left

            cur = cur?.next
            if (cur == null) {
                cur = next
                next = cur?.left
            }
        }
        
        return root
    }
}
