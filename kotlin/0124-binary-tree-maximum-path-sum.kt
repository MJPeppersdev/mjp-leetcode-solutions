class Solution {
    fun maxPathSum(root: TreeNode?): Int {
        val res = IntArray(1) {Int.MIN_VALUE}
        maxPathSum(root, res)
        return res[0]
    }

    fun maxPathSum(root: TreeNode?, res: IntArray): Int {
        if (root == null)
            return 0

        val left = Math.max(0, maxPathSum(root.left, res))
        val right = Math.max(0, maxPathSum(root.right, res))
        res[0] = Math.max(res[0], root.`val` + left + right)

        return root.`val` + Math.max(left, right)
    }
}
