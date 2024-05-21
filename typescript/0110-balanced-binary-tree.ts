function isBalanced(root: TreeNode | null): boolean {
    let array = getHeight(root);
    return array[0];
}

function getHeight(root: TreeNode | null) {
    if (!root) return [true, 0];

    let [leftBalanced, leftHeight] = getHeight(root.left);
    let [rightBalanced, rightHeight] = getHeight(root.right);

    let balanced =
        leftBalanced &&
        rightBalanced &&
        Math.abs(rightHeight - leftHeight) <= 1;

    return [balanced, 1 + Math.max(leftHeight, rightHeight)];
}