class BSTIterator:
    def __init__(self, root: Optional[TreeNode]):
        self.nums = []

        def dfs(root):
            if root is None:
                return
            dfs(root.left)
            self.nums.append(root.val)
            dfs(root.right)

        dfs(root)
        self.i = -1

    def hasNext(self) -> bool:
        return self.i < len(self.nums) - 1

    def next(self) -> int:
        self.i += 1
        return self.nums[self.i]

    def hasPrev(self) -> bool:
        return self.i > 0

    def prev(self) -> int:
        self.i -= 1
        return self.nums[self.i]