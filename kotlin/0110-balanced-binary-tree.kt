class Solution {
    fun isBalanced(root: TreeNode?): Boolean {
        return isBalancedUtil(root) != Int.MAX_VALUE
    }

    fun isBalancedUtil(node: TreeNode?): Int {
        if (node == null)
            return 0

        val left = isBalancedUtil(node.left)
        val right = isBalancedUtil(node.right)

        if (left == Int.MAX_VALUE || right == Int.MAX_VALUE)
            return Int.MAX_VALUE

        if (Math.abs(left - right) > 1)
            return Int.MAX_VALUE

        return Math.max(left, right) + 1
    }
}
