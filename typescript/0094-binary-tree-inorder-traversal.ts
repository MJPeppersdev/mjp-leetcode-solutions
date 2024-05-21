function inorderTraversal(root: TreeNode | null, list: Array<number> = [] ): number[] {
    
    if (!root) return [];
    
    inorderTraversal(root.left, list);
    list.push(root.val)
    inorderTraversal(root.right, list);
    
    return list
};