import scala.collection.mutable

object Solution {
  def twoSum(nums: Array[Int], target: Int): Array[Int] = {
    val numsWithIndex = nums.zipWithIndex
    val targets = numsWithIndex.toMap

    def compliment(v: Int): Option[Int] = targets.get(target - v)

    numsWithIndex
      .find { case (v, i) => !compliment(v).forall(_ == i) }
      .map { case (v, i) => Array(i, compliment(v).get) }
      .orNull
  }
}
