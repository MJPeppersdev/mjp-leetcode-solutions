class Solution:
    def guessMajority(self, reader: "ArrayReader") -> int:
        n = reader.length()
        x = reader.query(0, 1, 2, 3)
        a, b = 1, 0
        k = 0
        for i in range(4, n):
            if reader.query(0, 1, 2, i) == x:
                a += 1
            else:
                b += 1
                k = i

        y = reader.query(0, 1, 2, 4)
        if reader.query(1, 2, 3, 4) == y:
            a += 1
        else:
            b += 1
            k = 0
        if reader.query(0, 2, 3, 4) == y:
            a += 1
        else:
            b += 1
            k = 1
        if reader.query(0, 1, 3, 4) == y:
            a += 1
        else:
            b += 1
            k = 2

        if a == b:
            return -1
        return 3 if a > b else k
