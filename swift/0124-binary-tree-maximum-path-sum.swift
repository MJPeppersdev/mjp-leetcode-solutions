class Solution {
    var globalMax: Int = Int.min
    
    // Return max path that '''ends at''' a particular node
    private func ends(at node: TreeNode?) -> Int {
        // Base case
        guard let node = node else { return 0 }
        
        // Recursive cases
        // MAX with 0, to shorten negative paths
        let leftMaxPath  = max(ends(at: node.left),  0)
        let rightMaxPath = max(ends(at: node.right), 0)
        
        let pathIncludingNode = leftMaxPath + node.val + rightMaxPath
        globalMax = max(globalMax, pathIncludingNode)
        
        let pathEndingAtNode = max(leftMaxPath, rightMaxPath) + node.val
        return pathEndingAtNode
    }
    
    func maxPathSum(_ root: TreeNode?) -> Int {
        ends(at: root)
        return globalMax
    }
}