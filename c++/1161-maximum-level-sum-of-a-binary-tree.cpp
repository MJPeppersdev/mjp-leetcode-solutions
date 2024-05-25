class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(!root)
            return -1;
            
        int lvl = 0, maxi = INT_MIN, res;
        queue <TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            ++lvl;
            int sum = 0;
            int size = q.size();

            while(size--) {
                TreeNode * temp = q.front();
                q.pop();
                sum += temp -> val;
                if(temp -> left)
                    q.push(temp -> left);
                if(temp -> right)
                    q.push(temp -> right);
            }
            if(maxi < sum) {
                res = lvl;
                maxi = sum;
            }
        }
        return res;
    }
};
