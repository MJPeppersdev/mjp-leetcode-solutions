class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int sum=0,cnt=0;
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<nums.size();j++){
                sum+=nums[j];
                if(sum<queries[i]){
                    cnt++;
                    if(j==nums.size()-1){
                        ans.push_back(cnt);
                        cnt=0;
                        sum=0;
                        break;
                    }
                }
                else if(sum==queries[i]){
                    cnt++;
                    ans.push_back(cnt);
                    cnt=0;
                    sum=0;
                    break;
                }
                else{
                    ans.push_back(cnt);
                    cnt=0;
                    sum=0;
                    break;
                }
            }
        }
        return ans;
    }
};