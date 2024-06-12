class Solution:
    def copyRandomBinaryTree(self, root: 'Optional[Node]') -> 'Optional[NodeCopy]':
        def dfs(root):
            if root is None:
                return None
            if root in mp:
                return mp[root]
            copy = NodeCopy(root.val)
            mp[root] = copy
            copy.left = dfs(root.left)
            copy.right = dfs(root.right)
            copy.random = dfs(root.random)
            return copy

        mp = {}
        return dfs(root)
