int numTrees(int n){
    int* dp = (int*)malloc(sizeof(int)*(n+1));
    dp[0]=dp[1]=1;
    for (int i=2; i<(n+1); i++){
        dp[i] = 0;
        for (int j=1; j<(i+1); j++){
            dp[i]+=dp[j-1]*dp[i-j];
        }
    }
    // We could free dp
    return dp[n];
}
