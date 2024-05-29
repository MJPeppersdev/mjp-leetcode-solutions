class Solution:
    def buildTree(self, inorder: List[int], postorder: List[int]) -> Optional[TreeNode]:
        def buildTreeHelper(left, right):
            if left > right:
                return None

            rootVal = postorder.pop()
            rootNode = TreeNode(rootVal)

            idx = inorderIndexMap[rootVal]
            rootNode.right = buildTreeHelper(idx + 1, right)
            rootNode.left = buildTreeHelper(left, idx - 1)
            return rootNode

        inorderIndexMap = {}
        for (i, val) in enumerate(inorder):
            inorderIndexMap[val] = i

        return buildTreeHelper(0, len(postorder) - 1)
