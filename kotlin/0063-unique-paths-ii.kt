class Solution {
    fun uniquePathsWithObstacles(grid: Array<IntArray>): Int {

        val m = grid.lastIndex
        val n = grid[0].lastIndex

        if (grid[m][n] == 1 || grid[0][0] == 1) return 0
        
        val dp = IntArray(n+1)
        dp[n] = 1

        for (i in m downTo 0) {
            for (j in n downTo 0) {
                if (grid[i][j] == 1) dp[j] = 0
                else if (j < n) dp[j] = dp[j] + dp[j + 1]
                
            }
        }
    
        return dp[0]
    }
}
