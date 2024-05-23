class Solution {
    var globalCount: Int = 0
    
    func goodNodes(_ root: TreeNode?) -> Int {
        self.globalCount = 0
        visit(root, maxSoFar: nil)
        return self.globalCount
    }
}

private extension Solution {
    // DFS/Recursive traversal
    func visit(_ node: TreeNode?, maxSoFar: Int?) -> Void {
        // Base case 1. Node is nil
        guard let node = node else { return }
        
        // Base case 2. Initial value doesn't exist (in case of root)
        let maxVal: Int
        if let maxSoFar = maxSoFar  {
            maxVal = max(maxSoFar, node.val)
        } else { 
            maxVal = node.val
        }
        
        // update global count
        if !(maxVal > node.val) {
            self.globalCount += 1
        }
        
        // visit children
        visit(node.left,  maxSoFar: maxVal)
        visit(node.right, maxSoFar: maxVal)
    }
}