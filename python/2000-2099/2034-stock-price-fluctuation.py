from sortedcontainers import SortedList


class StockPrice:
    def __init__(self):
        self.d = {}
        self.ls = SortedList()
        self.last = 0

    def update(self, timestamp: int, price: int) -> None:
        if timestamp in self.d:
            self.ls.remove(self.d[timestamp])
        self.d[timestamp] = price
        self.ls.add(price)
        self.last = max(self.last, timestamp)

    def current(self) -> int:
        return self.d[self.last]

    def maximum(self) -> int:
        return self.ls[-1]

    def minimum(self) -> int:
        return self.ls[0]
