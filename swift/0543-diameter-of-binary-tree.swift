class Solution {
    private var globalMaxDiameter: Int = 0
    
    // Additionally, update the globalDiameter here
    func getMaxDepth(_ node: TreeNode?) -> Int {
        guard let node = node else { return 0 }
        
        // compute for each child
        let leftMax = getMaxDepth(node.left)
        let rightMax = getMaxDepth(node.right)
        
        // update diameter
        let diameter = leftMax + rightMax
        self.globalMaxDiameter = max(self.globalMaxDiameter, diameter)
        
        // return max depth of 'this' node
        return 1 + max(leftMax, rightMax)        
    }
    
    func diameterOfBinaryTree(_ root: TreeNode?) -> Int {
        self.globalMaxDiameter = 0
        getMaxDepth(root)
        return self.globalMaxDiameter
    }
}