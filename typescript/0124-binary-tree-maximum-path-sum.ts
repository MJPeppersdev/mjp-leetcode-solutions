function maxPathSum(root: TreeNode | null): number {
    const res = [root.val];

    // return max path sum without split
    function dfs(root: TreeNode | null): number {
        if (!root) {
            return 0;
        }

        let leftMax = dfs(root.left);
        let rightMax = dfs(root.right);
        leftMax = Math.max(leftMax, 0);
        rightMax = Math.max(rightMax, 0);

        // compute max path sum WITH split
        res[0] = Math.max(res[0], root.val + leftMax + rightMax);
        return root.val + Math.max(leftMax, rightMax);
    }

    dfs(root);
    return res[0];
}