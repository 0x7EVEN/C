class Solution {
public:
    vector<int> dp;
    int tribonacci(int n) {
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        if(n == 2){
            return 1;
        }
        dp.resize(n+1,-1);
        
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        return solve(n);    
    }    
    
    int solve(int n){
    if(n <= 0){
            return 0;
        }
        if(dp[n] != -1){
            return dp[n];
        }else{
            dp[n] = solve(n-3)+solve(n-2)+solve(n-1);
            return dp[n];
        }
    }
};
