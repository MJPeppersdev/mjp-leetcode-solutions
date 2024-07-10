class Solution:
    def kthLargestLevelSum(self, root: Optional[TreeNode], k: int) -> int:
        arr = []
        q = deque([root])
        while q:
            t = 0
            for _ in range(len(q)):
                root = q.popleft()
                t += root.val
                if root.left:
                    q.append(root.left)
                if root.right:
                    q.append(root.right)
            arr.append(t)
        return -1 if len(arr) < k else nlargest(k, arr)[-1]
