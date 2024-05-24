class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 2; // define at most k times of duplicate numbers
        
        int l = 1, count = 1;

        for(int r = 1; r < nums.size(); r++){
            if(nums[r] == nums[r-1]){
                if(count < k)
                    nums[l++] = nums[r];
                count++;
            }
            else {
                count = 1;
                nums[l++] = nums[r];
            }
        }

        return l;
    }
};