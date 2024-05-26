class Solution {
    fun firstMissingPositive(nums: IntArray): Int {
        var i = 0
       
        while(i < nums.size) {
            val pos = nums[i] - 1
            if(pos in (0 until nums.size) && nums[i] != nums[pos]) nums.swap(i, pos)
            else i++
        }

        
        for(i in nums.indices){
            if (nums[i] != i + 1) return i + 1
        }
        return nums.size + 1
    }
    private fun IntArray.swap(i: Int, j: Int) {
        this[i] = this[j].also{ this[j] = this[i]}
    }
}
