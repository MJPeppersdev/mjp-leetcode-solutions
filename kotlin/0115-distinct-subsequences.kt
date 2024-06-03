class Solution {
    fun numDistinct(s: String, t: String): Int {
        val dp = Array(s.length + 1) { IntArray(t.length + 1) }

        for (i in 0..s.length)
            dp[i][t.length] = 1

        for (i in s.length - 1 downTo 0) {
            for (j in t.length - 1 downTo 0) {
                if (s[i] == t[j])
                    dp[i][j] += (dp[i + 1][j + 1] + dp[i + 1][j])
                else
                    dp[i][j] += dp[i + 1][j]
            }
        }

        return dp[0][0]
    }
}
