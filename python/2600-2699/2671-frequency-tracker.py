class FrequencyTracker:
    def __init__(self):
        self.cnt = defaultdict(int)
        self.freq = defaultdict(int)

    def add(self, number: int) -> None:
        self.freq[self.cnt[number]] -= 1
        self.cnt[number] += 1
        self.freq[self.cnt[number]] += 1

    def deleteOne(self, number: int) -> None:
        if self.cnt[number]:
            self.freq[self.cnt[number]] -= 1
            self.cnt[number] -= 1
            self.freq[self.cnt[number]] += 1

    def hasFrequency(self, frequency: int) -> bool:
        return self.freq[frequency] > 0
