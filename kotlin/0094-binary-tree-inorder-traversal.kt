class Solution {
    fun inorderTraversal(root: TreeNode?): List<Int> {
        val res = ArrayList<Int>()
        
        fun inOrder(node: TreeNode?) {
            node?: return
            inOrder(node.left)
            res.add(node.`val`)
            inOrder(node.right)
        }
        
        inOrder(root)
        return res
    }
}
