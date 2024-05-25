class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root) 
            return 0;
        int count = 1;
        queue <TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            for(int i = 0 ; i < size ; i++) {
                TreeNode* front = q.front();
                if(!front -> left && !front -> right)
                    return count;
                if(front -> left)
                    q.push(front -> left);
                if(front -> right)
                    q.push(front -> right);

                q.pop();
            }
            count++;
        }
        return count;
    }
};
