class CombinationIterator:
    def __init__(self, characters: str, combinationLength: int):
        def dfs(i):
            if len(t) == combinationLength:
                cs.append(''.join(t))
                return
            if i == n:
                return
            t.append(characters[i])
            dfs(i + 1)
            t.pop()
            dfs(i + 1)

        cs = []
        n = len(characters)
        t = []
        dfs(0)
        self.cs = cs
        self.idx = 0

    def next(self) -> str:
        ans = self.cs[self.idx]
        self.idx += 1
        return ans

    def hasNext(self) -> bool:
        return self.idx < len(self.cs)