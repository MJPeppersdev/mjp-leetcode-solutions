class Solution:
    def preorder(self, root: "Node") -> List[int]:
        def dfs(root):
            if root is None:
                return
            ans.append(root.val)
            for child in root.children:
                dfs(child)

        ans = []
        dfs(root)
        return ans
