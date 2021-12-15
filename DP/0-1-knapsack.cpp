   
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    int dp[1002][1002];
    Solution(){memset(dp,0,sizeof(dp));}
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       for(int i=0;i<n+1;i++){
           
           for(int j=0;j<W+1;j++){
                if(j==0 || i== 0){
                    dp[i][j] = 0;
                }else{
                    if(wt[i-1] <= j){
                        dp[i][j]  = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);   
                    }else{
                        dp[i][j] = dp[i-1][j];
                    }
                }
           }
       }
        return dp[n][W];
    }
};


// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
