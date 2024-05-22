class Solution {
    func singleNumber(_ nums: [Int]) -> Int {
      var ans = 0
      for i in nums {
          ans ^= i
      }
      return ans
    }
}
