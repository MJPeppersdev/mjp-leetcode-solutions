class CBTInserter:

    def __init__(self, root: Optional[TreeNode]):
        self.tree = []
        q = deque([root])
        while q:
            for _ in range(len(q)):
                node = q.popleft()
                self.tree.append(node)
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)

    def insert(self, val: int) -> int:
        p = self.tree[(len(self.tree) - 1) // 2]
        node = TreeNode(val)
        self.tree.append(node)
        if p.left is None:
            p.left = node
        else:
            p.right = node
        return p.val

    def get_root(self) -> Optional[TreeNode]:
        return self.tree[0]
