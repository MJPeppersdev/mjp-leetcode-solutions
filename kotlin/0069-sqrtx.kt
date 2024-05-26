class Solution {
    fun mySqrt(x: Int): Int {
        if (x == 0) return 0

        var i = x.toLong()
        while (i > x / i) {
            i = (i + x / i) / 2
        }

        return i.toInt()
    }
}
