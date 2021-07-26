/*
Can reach top of staircase using 1,2 or 3 steps. Find total ways to do so.
*/


long staircase(int n)
{
    long dp[n+1];
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    
    return dp[n];

}
