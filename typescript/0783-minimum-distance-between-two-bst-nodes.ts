function minDiffInBST(root: TreeNode | null): number {
    let prev: TreeNode | null = null;
    let res = Number.MAX_VALUE;

    function dfs(node: TreeNode | null): void {
        if (node) {
            dfs(node.left);

            if (prev) {
                res = Math.min(res, node.val - prev.val);
            }
            prev = node;

            dfs(node.right);
        }
    }

    dfs(root);
    return res;
}
