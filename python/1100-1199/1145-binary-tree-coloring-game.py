class Solution:
    def btreeGameWinningMove(self, root: Optional[TreeNode], n: int, x: int) -> bool:
        def dfs(root):
            if root is None or root.val == x:
                return root
            return dfs(root.left) or dfs(root.right)

        def count(root):
            if root is None:
                return 0
            return 1 + count(root.left) + count(root.right)

        node = dfs(root)
        l, r = count(node.left), count(node.right)
        return max(l, r, n - l - r - 1) > n // 2
