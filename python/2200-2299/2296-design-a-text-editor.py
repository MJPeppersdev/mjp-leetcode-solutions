class TextEditor:
    def __init__(self):
        self.left = []
        self.right = []

    def addText(self, text: str) -> None:
        self.left.extend(list(text))

    def deleteText(self, k: int) -> int:
        k = min(k, len(self.left))
        for _ in range(k):
            self.left.pop()
        return k

    def cursorLeft(self, k: int) -> str:
        k = min(k, len(self.left))
        for _ in range(k):
            self.right.append(self.left.pop())
        return ''.join(self.left[-10:])

    def cursorRight(self, k: int) -> str:
        k = min(k, len(self.right))
        for _ in range(k):
            self.left.append(self.right.pop())
        return ''.join(self.left[-10:])
