class Solution:
    def boundaryOfBinaryTree(self, root: TreeNode) -> List[int]:
        self.res = []
        if not root:
            return self.res
        if not self.is_leaf(root):
            self.res.append(root.val)

        t = root.left
        while t:
            if not self.is_leaf(t):
                self.res.append(t.val)
            t = t.left if t.left else t.right

        self.add_leaves(root)

        s = []
        t = root.right
        while t:
            if not self.is_leaf(t):
                s.append(t.val)
            t = t.right if t.right else t.left
        while s:
            self.res.append(s.pop())

        return self.res

    def add_leaves(self, root):
        if self.is_leaf(root):
            self.res.append(root.val)
            return
        if root.left:
            self.add_leaves(root.left)
        if root.right:
            self.add_leaves(root.right)

    def is_leaf(self, node) -> bool:
        return node and node.left is None and node.right is None
