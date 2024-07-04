class SQL:
    def __init__(self, names: List[str], columns: List[int]):
        self.tables = defaultdict(list)

    def insertRow(self, name: str, row: List[str]) -> None:
        self.tables[name].append(row)

    def deleteRow(self, name: str, rowId: int) -> None:
        pass

    def selectCell(self, name: str, rowId: int, columnId: int) -> str:
        return self.tables[name][rowId - 1][columnId - 1]

