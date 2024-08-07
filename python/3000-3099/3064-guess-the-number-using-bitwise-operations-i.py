class Solution:
    def findNumber(self) -> int:
        return sum(1 << i for i in range(32) if commonSetBits(1 << i))
