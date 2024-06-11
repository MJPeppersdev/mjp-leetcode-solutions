class Solution:
    def isUnivalTree(self, root: TreeNode) -> bool:
        def dfs(node):
            if node is None:
                return True
            return node.val == root.val and dfs(node.left) and dfs(node.right)

        return dfs(root)