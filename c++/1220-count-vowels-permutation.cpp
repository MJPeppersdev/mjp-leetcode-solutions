class Solution {
const unsigned int mod = 1e9+7;
public:
    int countVowelPermutation(int n) {
        vector<int> prev(5,1), curr(5, 0);
        for(int i=1; i<n; i++) {
            curr[0] = prev[1] % mod;
            curr[1] = (prev[0] + prev[2]) % mod;
            curr[2] = ((prev[0] % mod) + (prev[1] % mod) + (prev[3] % mod) + (prev[4] % mod)) % mod;
            curr[3] = (prev[4] + prev[2]) % mod;
            curr[4] = prev[0] % mod;
            prev = curr;
        }
        int ans = 0;
        for(auto &a:prev) ans = (ans + a) % mod;
        return ans;
    }
};
