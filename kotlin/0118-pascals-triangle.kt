class Solution {
    fun generate(numRows: Int) = mutableListOf<List<Int>>(listOf(1)).apply {
        for(row in 1 until numRows) 
            add(listOf(1) + this[row-1].windowed(2).map { it.sum()} + listOf(1))
    }
}
