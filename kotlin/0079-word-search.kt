class Solution {
var ROWS: Int = 0
var COLS: Int = 0


    fun exist(board: Array<CharArray>, word: String): Boolean {

        ROWS = board.count()
        COLS = board[0].count()

        for (row in 0 until ROWS) {
            for (col in 0 until COLS) {
                if (dfs(board, row, col, word, 0))
                    return true
            }
        }


        return false
    }

    fun dfs(board: Array<CharArray>, row: Int, col: Int, word: String, indx: Int): Boolean {

        if (indx == word.count())
            return true

        if (row < 0 || row == ROWS || col < 0 || col == COLS || board[row][col] != word[indx])
            return false


        board[row][col] = '#'
        var found = false
        val rowOffsets = intArrayOf(0, 1, 0, -1)
        val colOffsets = intArrayOf(1, 0, -1, 0)

        for (i in 0..3) {
            found = dfs(board, row + rowOffsets[i], col + colOffsets[i], word, indx + 1)
            if (found)
                break

        }
        board[row][col] = word[indx]

        return found
    }



}
