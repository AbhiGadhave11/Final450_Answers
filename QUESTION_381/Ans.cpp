class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSackx(int W, int wt[], int val[], int n,vector<vector<int>> &dp) 
    { 
        
       if(W == 0 || n == 0)
       {
           dp[n][W] = 0;
           return 0;
       }
       if(dp[n][W] != -1)
       {
           return dp[n][W];
       }
       if(wt[n-1]<=W)
       {
           int ans1 = knapSackx(W-wt[n-1],wt,val,n-1,dp)+val[n-1];
           int ans2 = knapSackx(W,wt,val,n-1,dp);
           int ans =  max(ans1,ans2);
           dp[n][W] = ans;
           return ans;
       }
       else if(wt[n-1]>W)
       {
           int ans =  knapSackx(W,wt,val,n-1,dp);
           dp[n][W] = ans;
           return ans;
       }
    }
    
  int knapSack_tabu(int W, int wt[], int val[], int N,vector<vector<int>> &dp) 
    { 
        int ans = 0;
       
        for(int n = 1;n<N+1;n++)
        {
            for(int w = 1; w<W+1;w++)
            {
                if(w == 0 || n == 0)
                {
                    dp[n][w] = 0;
                    ans = 0;
                    continue;
                }
                if(wt[n-1]<=w)
                {
                   int ans1 = val[n-1]+dp[n-1][w-wt[n-1]];
                   int ans2 = dp[n-1][w];
                   ans =  max(ans1,ans2);
                   dp[n][w] = ans;
                  
                }
                else if(wt[n-1]>w)
                {
                   ans =  dp[n-1][w];
                   dp[n][w] = ans;
                   
                }
            }
        }
        return ans;
       
    }
    
    int knapSack(int W,int wt[],int val[],int n)
    {
       vector<vector<int>> vec( n+1 , vector<int> (W+1, 0));
       int ans = knapSack_tabu(W,wt,val,n,vec);
       
        return ans;
    }
};
