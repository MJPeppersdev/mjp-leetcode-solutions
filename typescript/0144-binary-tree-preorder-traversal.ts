function preorderTraversal(root: TreeNode | null): number[] {
    let res: number[] = [];

    function dfs(root) {
        if (!root) {
            return;
        }

        res.push(root.val);
        dfs(root.left);
        dfs(root.right);
    }

    dfs(root);
    return res;
}