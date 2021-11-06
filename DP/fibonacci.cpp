#include <bits/stdc++.h>
class Solution {
public:
    int dp[34];
    memset(dp,-1,sizeof(dp))
    int fib(int n) {
        if(n<=0){return 0;}
        if(dp[n] != -1){
            return dp[n];
        }else{
            dp[n] = fib(n-1)+fib(n-2);
            return dp[n];
        }
    }
};
