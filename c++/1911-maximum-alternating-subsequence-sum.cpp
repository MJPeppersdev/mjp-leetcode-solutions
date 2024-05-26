class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long even = 0, odd = 0, tmpEven, tmpOdd;
        for(int i=nums.size()-1; i>=0; i--) {
            tmpEven = max(odd + nums[i], even);
            tmpOdd = max(even - nums[i], odd);
            even = tmpEven;
            odd = tmpOdd;
        }
        return even;
    }
};