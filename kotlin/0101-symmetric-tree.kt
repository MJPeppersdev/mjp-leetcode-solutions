class Solution {
    fun isSymmetric(root: TreeNode?): Boolean {

        fun dfs(left: TreeNode?, right: TreeNode?): Boolean {
            if(left == null && right == null)
                return true
            if(left == null || right == null)
                return false

            return left.value == right.value &&
                dfs(left.left, right.right) &&
                dfs(left.right, right.left)
        }

        return dfs(root!!.left, root!!.right)
    }

    val TreeNode.value get()= this.`val`
}
