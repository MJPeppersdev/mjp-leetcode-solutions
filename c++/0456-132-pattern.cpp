class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<pair<int, int>> s;
        int curMin = nums[0];

        for(auto & n : nums){
           
            while(!s.empty() && s.top().first <= n){
                s.pop();
            }
           
            if(!s.empty() && s.top().second < n) return true;
            else{
               
                s.push({n, curMin});
                curMin = min(curMin, n);
            }
        }
        return false;
    }
};
