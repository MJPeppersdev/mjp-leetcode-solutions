object Solution {
    def isSubtree(root: TreeNode, subRoot: TreeNode): Boolean = {
        if (root == null && subRoot == null) {
            return true
        } else if (root != null && subRoot == null) {
            return true
        } else if (root == null && subRoot != null) {
            return false
        } else {
            return isSameTree(root, subRoot) || (isSubtree(root.left, subRoot) || isSubtree(root.right, subRoot))
        }
    }
    
    def isSameTree(p: TreeNode, q: TreeNode): Boolean = {
        if (p == null && q == null) {
            return true
        } else if (p == null || q == null) {
            return false
        } else if (p.value != q.value) {
            return false 
        } else {
            return isSameTree(p.left, q.left) && isSameTree(p.right, q.right)
        }
    }
}