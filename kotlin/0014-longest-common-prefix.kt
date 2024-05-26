class Solution {
    fun longestCommonPrefix(strs: Array<String>): String {
        var res = ""
        strs.minBy { it.length }?.forEachIndexed { i,c ->
            if(strs.all { it[i] == c } ) res += c else return res      
        }
        return res
    }
}
