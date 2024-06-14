class SparseVector:
    def __init__(self, nums: List[int]):
        self.d = {i: v for i, v in enumerate(nums) if v}

    # Return the dotProduct of two sparse vectors
    def dotProduct(self, vec: "SparseVector") -> int:
        a, b = self.d, vec.d
        if len(b) < len(a):
            a, b = b, a
        return sum(v * b.get(i, 0) for i, v in a.items())
