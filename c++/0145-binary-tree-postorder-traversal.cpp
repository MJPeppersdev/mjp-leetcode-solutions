class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root) return {}; 

        postorderTraversal(root->left);
        postorderTraversal(root->right);
        result.push_back(root->val);
        
        return result;
    }
private:
    vector<int> result;
};