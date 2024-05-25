class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
        int currSum=0;
        reversed(root,currSum);
        return root;
    }

private:



    void reversed(TreeNode* root,int &currSum){
        if(root==NULL){
            return;
        }

        reversed(root->right,currSum);
        currSum+=root->val;
        root->val=currSum;
        reversed(root->left,currSum);
    }
};
