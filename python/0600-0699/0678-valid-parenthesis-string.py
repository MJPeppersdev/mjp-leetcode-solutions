class Solution:
    def checkValidString(self, s: str) -> bool:
        dp = {(len(s), 0): True} 

        def dfs(i, left):
            if i == len(s) or left < 0:
                return left == 0
            if (i, left) in dp:
                return dp[(i, left)]

            if s[i] == "(":
                dp[(i, left)] = dfs(i + 1, left + 1)
            elif s[i] == ")":
                dp[(i, left)] = dfs(i + 1, left - 1)
            else:
                dp[(i, left)] = (
                    dfs(i + 1, left + 1) or dfs(i + 1, left - 1) or dfs(i + 1, left)
                )
            return dp[(i, left)]

        return dfs(0, 0)
