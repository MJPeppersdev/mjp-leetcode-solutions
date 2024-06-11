class Solution:
    def allPossibleFBT(self, n: int) -> List[Optional[TreeNode]]:
        dp = { 0 : [], 1 : [ TreeNode() ] }

        def backtrack(n):
            if n in dp:
                return dp[n]
            
            res = []
            for l in range(n):
                r = n - 1 - l
                leftTrees, rightTrees = backtrack(l), backtrack(r)

                for t1 in leftTrees:
                    for t2 in rightTrees:
                        res.append(TreeNode(0, t1, t2))
            dp[n] = res
            return res
        
        return backtrack(n)
