class Solution:
    def getKthCharacter(self, root: Optional[object], k: int) -> str:
        def dfs(root):
            if root is None:
                return ""
            if root.len == 0:
                return root.val
            return dfs(root.left) + dfs(root.right)

        return dfs(root)[k - 1]
