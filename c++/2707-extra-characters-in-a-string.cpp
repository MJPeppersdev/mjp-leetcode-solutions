class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.size();
        vector<int> dp(n + 1, n);

        dp[0] = 0; 

        for (int i = 1; i <= n; ++i) {
            for(int j = 0 ; j < dictionary.size() ; ++j) {
                int len = dictionary[j].size();
                if (i >= len && s.substr(i - len, len) == dictionary[j]) {
                    dp[i] = min(dp[i], dp[i - len]);
                }
            }
            dp[i] = min(dp[i], dp[i - 1] + 1);
        }

        return dp[n];
    }
};
