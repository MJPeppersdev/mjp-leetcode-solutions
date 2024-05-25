class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector <double> v;
        if(root == NULL) 
            return v;
        queue <TreeNode *> q;
        q.push(root);

        while(!q.empty()) {
            double sum = 0, count = 0;
            int siz = q.size();
            for(int i = 0 ; i < siz ; i++) {
                sum += q.front() -> val;
                if(q.front() -> left)
                    q.push(q.front() -> left);
                if(q.front() -> right) 
                    q.push(q.front() -> right);
                ++count;
                q.pop();
            }
            v.push_back(sum / count);
        }
        return v;
    }
};
