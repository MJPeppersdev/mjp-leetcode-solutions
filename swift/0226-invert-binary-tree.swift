class Solution {
    func invertTree(_ root: TreeNode?) -> TreeNode? {
        guard root != nil else { return root }
        let left = invertTree(root?.left)
        let right = invertTree(root?.right)
        root?.left = right
        root?.right = left
        return root
    }

}