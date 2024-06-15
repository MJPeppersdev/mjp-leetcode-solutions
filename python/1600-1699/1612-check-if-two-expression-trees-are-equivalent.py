class Solution:
    def checkEquivalence(self, root1: 'Node', root2: 'Node') -> bool:
        def dfs(root, v):
            if root is None:
                return
            if root.val != '+':
                cnt[root.val] += v
            dfs(root.left, v)
            dfs(root.right, v)

        cnt = Counter()
        dfs(root1, 1)
        dfs(root2, -1)
        return all(x == 0 for x in cnt.values())
