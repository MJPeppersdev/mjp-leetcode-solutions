class Solution:
    def verticalTraversal(self, root: Optional[TreeNode]) -> List[List[int]]:
        def dfs(root: Optional[TreeNode], i: int, j: int):
            if root is None:
                return
            nodes.append((j, i, root.val))
            dfs(root.left, i + 1, j - 1)
            dfs(root.right, i + 1, j + 1)

        nodes = []
        dfs(root, 0, 0)
        nodes.sort()
        ans = []
        prev = -2000
        for j, _, val in nodes:
            if prev != j:
                ans.append([])
                prev = j
            ans[-1].append(val)
        return ans
