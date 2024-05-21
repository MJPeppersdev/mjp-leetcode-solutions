function levelOrder(root: TreeNode | null): number[][] {
    const levels: number[][] = [];

    function getHeight(node: TreeNode | null, height: number) {
        if (!node) return 0;

        if (node.left || node.right) {
            getHeight(node.left, height + 1);
            getHeight(node.right, height + 1);
        }

        if (levels[height]) {
            levels[height].push(node.val);
        } else {
            levels[height] = [node.val];
        }
    }

    getHeight(root, 0);

    return levels;
}