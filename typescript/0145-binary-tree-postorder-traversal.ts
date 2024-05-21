function postorderTraversal(root: TreeNode | null): number[] {
    let res: number[] = [];

    function dfs(root) {
        if (!root) {
            return;
        }

        dfs(root.left);
        dfs(root.right);
        res.push(root.val);
    }

    dfs(root);
    return res;
}