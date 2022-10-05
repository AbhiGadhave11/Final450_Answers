class Solution {
  public:
    long long int f(int ind,int coins[],int N,int sum,vector<vector<int>>&dp)
    {
        if(ind == 0)
        {
            if(sum%coins[ind] == 0)
            {
                return sum/coins[ind];
            }
            else
            {
                return 1e9;
            }
        }
        if(dp[N][sum] != -1)
          return dp[N][sum];
        int nonpick = f(ind-1,coins,N,sum);
        int pick = INT_MAX;
        if(sum>=coins[ind])
        {
            pick = 1 + f(ind,coins,N,sum-coins[ind]);
        }
        return dp[ind][sum] = max(pick,nonpick);
    }
    long long int count(int coins[], int N, int sum) 
    {
      vector<vector<int>>dp(N+1,vector<int>(sum+1,-1));
        return f(N-1,coins,N,sum,dp);
        // code here.
    }
};
