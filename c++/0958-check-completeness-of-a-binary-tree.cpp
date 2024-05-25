class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        queue <TreeNode*> q;
        q.push(root);
        bool isNull = false;

        while(!q.empty()) {
            TreeNode * front = q.front();
            if(!front)
                isNull = true;
            else {
                if(isNull)
                    return false;
                q.push(front -> left);
                q.push(front -> right);
            }
            q.pop();
        }
        return true;
    }
};
