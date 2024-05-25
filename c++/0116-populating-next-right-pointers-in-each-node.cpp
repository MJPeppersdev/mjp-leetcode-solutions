class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL || (root -> right == NULL && root -> left == NULL))
            return root;
        queue <Node*>q;
        q.push(root);

        while(!q.empty()) {
            int size = q.size();
            Node* temp = NULL;

            for(int i = 0 ; i < size ; i++) {
                Node* front = q.front();

                if(temp != NULL)
                    temp -> next = front;
                temp = front;

                if(front -> left) {
                    q.push(front -> left);
                    q.push(front -> right);
                }
                q.pop();
            }
        }
        return root;
    }
};
