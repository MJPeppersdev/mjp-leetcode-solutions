void dfs(struct TreeNode* root, int* result, int* returnSize, int depth) {
    if (root == NULL)
        return;
    
    // If a new depth is reached, add the node as right view for that depth
    if (*returnSize <= depth) {
        *returnSize += 1;
        result[depth] = root->val;   
    }

    // Visit the right child first then left child
    dfs(root->right, result, returnSize, depth+1);
    dfs(root->left, result, returnSize, depth+1);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rightSideView(struct TreeNode* root, int* returnSize) {
    // Size of result array depends on the depth of tree, which can be precomputed
    int* result = (int*) malloc(sizeof(int)*100);   
    *returnSize = 0;

    dfs(root, result, returnSize, 0);

    return result;
}
