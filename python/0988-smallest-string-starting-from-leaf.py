class Solution:
    def smallestFromLeaf(self, root: TreeNode) -> str:
        ans = chr(ord('z') + 1)

        def dfs(root, path):
            nonlocal ans
            if root:
                path.append(chr(ord('a') + root.val))
                if root.left is None and root.right is None:
                    ans = min(ans, ''.join(reversed(path)))
                dfs(root.left, path)
                dfs(root.right, path)
                path.pop()

        dfs(root, [])
        return ans
