class Solution {
    fun isValidSudoku(board: Array<CharArray>): Boolean {
        val columnHashSets = Array(9) { HashSet<Int>() }
        val rowHashSets = Array(9) { HashSet<Int>() }
        val subMatrixHashSets = arrayOf(
            arrayOf(HashSet<Int>(), HashSet<Int>(), HashSet<Int>()),
            arrayOf(HashSet<Int>(), HashSet<Int>(), HashSet<Int>()),
            arrayOf(HashSet<Int>(), HashSet<Int>(), HashSet<Int>())
        )
        for (i in 0 until 9) {
            for (j in 0 until 9) {
               
                if (!board[i][j].isDigit()) continue
                val value = Character.getNumericValue(board[i][j])
               
                if (value in columnHashSets[i]) return false
                columnHashSets[i].add(value)
               
                if (value in rowHashSets[j]) return false
                rowHashSets[j].add(value)
                
                if (value in subMatrixHashSets[j / 3][i / 3]) return false
                
                subMatrixHashSets[j / 3][i / 3].add(value)
            }
        }
        return true
    }
}
