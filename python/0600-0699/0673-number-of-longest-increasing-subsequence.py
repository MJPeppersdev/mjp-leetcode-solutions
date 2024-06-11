class Solution:
    def findNumberOfLIS(self, nums: List[int]) -> int:

        dp = {}  
        lenLIS, res = 0, 0  

        def dfs(i):
            if i in dp:
                return dp[i]

            maxLen, maxCnt = 1, 1  
            for j in range(i + 1, len(nums)):
                if nums[j] > nums[i]:  
                    length, count = dfs(j)
                    if length + 1 > maxLen:
                        maxLen, maxCnt = length + 1, count
                    elif length + 1 == maxLen:
                        maxCnt += count
            nonlocal lenLIS, res
            if maxLen > lenLIS:
                lenLIS, res = maxLen, maxCnt
            elif maxLen == lenLIS:
                res += maxCnt
            dp[i] = [maxLen, maxCnt]
            return dp[i]

        for i in range(len(nums)):
            dfs(i)
        return res