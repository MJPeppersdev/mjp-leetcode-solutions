class Solution:
    def findSecondMinimumValue(self, root: Optional[TreeNode]) -> int:
        def dfs(root):
            if root:
                dfs(root.left)
                dfs(root.right)
                nonlocal ans, v
                if root.val > v:
                    ans = root.val if ans == -1 else min(ans, root.val)

        ans, v = -1, root.val
        dfs(root)
        return ans
