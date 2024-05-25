class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL)
            return NULL;
        Node* parent = root;

        while(parent) {
            Node* newNode = new Node;
            Node* temp = newNode;

            while(parent) {
                if(parent -> left) {
                    temp -> next = parent -> left;
                    temp = temp -> next;
                }
                if(parent -> right) {
                    temp -> next = parent -> right;
                    temp = temp -> next;
                }
                parent = parent -> next;
            }
            parent = newNode -> next;
        }
        return root;
    }
};
