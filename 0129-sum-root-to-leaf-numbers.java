class Solution {
    /*
        Time complexity: O(V) where V is the number of vertices
        Space complexity: O(h) where h is the height of the tree
    */

    public int sumNumbers(TreeNode root) {
        // track the sum that we want to add
        int solution = 0;

        // execute a dfs to find the leaf nodes
        solution = findLeafNodes(root, solution);

        // return the solution
        return solution;
    }

    // dfs method
    public int findLeafNodes(TreeNode node, int currentPath){
        // base case, if no node then return 0
        if(node==null){
            return 0;
        }

        // add the current node value to the currentPath (move decimal to right by 1 and add)
        currentPath = (currentPath * 10) + node.val;

        // if we are at a non-null node, check if it is a leaf
        if(node.left==null && node.right==null){
            // return the solution
            return currentPath;
        }

        // check find the leaf nodes on the left and right
        return findLeafNodes(node.left, currentPath) + findLeafNodes(node.right, currentPath);
    }
}