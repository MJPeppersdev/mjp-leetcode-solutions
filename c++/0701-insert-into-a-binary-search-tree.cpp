class Solution {
public:
    TreeNode * create(int val) {
        TreeNode *n = new TreeNode;
        n -> val = val;
        n -> left = n -> right = NULL;
        return n;
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) 
		    return create(val);

        else if(val > root -> val)
		    root -> right = insertIntoBST(root -> right, val); 
        else if(val < root -> val)
		    root -> left = insertIntoBST(root -> left, val);
	    return root;
    }
};
