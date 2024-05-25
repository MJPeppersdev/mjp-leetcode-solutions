#include <iostream>
#include <vector>
using namespace std;


class Solution
{
public:
    int numSquares(int n)
    {

        vector<int> vectorOfPerfectSquare;

      
        for (int i = 1; i * i <= n; i++)
        {
           
            vectorOfPerfectSquare.push_back(i * i);
        }


        if (n == 1)
        {
            return 1;
        }

 
        int Max = n + 1;
      
        vector<int> dp(n + 1, Max);
      
        dp[0] = 0;
     
        for (int i = 1; i <= n; i++)
        {

            for (int j = 0; j < vectorOfPerfectSquare.size(); j++)
            {
             
                if (i - vectorOfPerfectSquare[j] >= 0)
                {
                   
                    dp[i] = min(dp[i], dp[i - vectorOfPerfectSquare[j]] + 1);
                }
            }
        }

        return dp[n] > n ? -1 : dp[n];
    }
};