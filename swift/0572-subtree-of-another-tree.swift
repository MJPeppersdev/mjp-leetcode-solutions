class Solution {
    private func areSameTrees(
        _ node1: TreeNode?, 
        _ node2: TreeNode?
    ) -> Bool {
        // if both are nil, they are same
        if node1 == nil && node2 == nil { return true }
        
        // if anyone else is nil, they are not the same
        guard let node1 = node1 else { return false }
        guard let node2 = node2 else { return false }
        
        return (
            (node1.val == node2.val) &&
            areSameTrees(node1.left, node2.left) &&
            areSameTrees(node1.right, node2.right)
        )
    }
    
    func isSubtree(_ root: TreeNode?, _ subRoot: TreeNode?) -> Bool {
        // Base cases (both can be nil, just any one can't)
        if root == nil && subRoot == nil { return true }
        guard let root = root else { return false }
        guard let subRoot = subRoot else { return false }
        
        // Base case: Exactly same tree
        if areSameTrees(root, subRoot) { return true }
        
        // Recursive
        return isSubtree(root.left, subRoot) 
                || isSubtree(root.right, subRoot)
    }
}