class Solution:
    def searchBST(self, root: TreeNode, val: int) -> TreeNode:
        if root is None or root.val == val:
            return root
        return (
            self.searchBST(root.right, val)
            if root.val < val
            else self.searchBST(root.left, val)
        )
