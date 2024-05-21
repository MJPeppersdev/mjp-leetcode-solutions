class Solution {
    //This would be easily solved by DFS and then comparing the values
    public boolean dfs(TreeNode root, int targetSum, int currSum){
        if(root == null) return false;

        currSum += root.val;
        if(root.left == null && root.right == null){
            return (currSum == targetSum);
        }
        return dfs(root.left, targetSum, currSum) || dfs(root.right, targetSum, currSum);
    }
    public boolean hasPathSum(TreeNode root, int targetSum) {
        return dfs(root, targetSum, 0);
    }
}