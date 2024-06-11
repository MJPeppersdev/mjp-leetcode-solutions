class Solution:
    def findSolution(self, customfunction: "CustomFunction", z: int) -> List[List[int]]:
        ans = []
        for x in range(1, z + 1):
            y = 1 + bisect_left(
                range(1, z + 1), z, key=lambda y: customfunction.f(x, y)
            )
            if customfunction.f(x, y) == z:
                ans.append([x, y])
        return ans
