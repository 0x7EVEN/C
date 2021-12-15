   
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int n;
    cin>>t;
    // vector <vector<int>> arr(n,<vector<int>>);
    for(int i=0;i<t;i++){
        cin>>n;
        int arr[n][3];
        cin>>arr[0][0];
        cin>>arr[0][1];
        cin>>arr[0][2];
        for(int l=1;l<n;l++){
            cin>>arr[l][0];
            arr[l][0] = arr[l][0] + min(arr[l-1][1],arr[l-1][2]);
            
            cin>>arr[l][1];
            arr[l][1] = arr[l][1] + min(arr[l-1][0],arr[l-1][2]);
            
            cin>>arr[l][2];
            arr[l][2] = arr[l][2] + min(arr[l-1][0],arr[l-1][1]);
        }
        int minVal = INT_MAX;
        for(int l=0;l<3;l++){
            minVal = min(minVal,arr[n-1][l]);
        }
        cout<<minVal<<endl;
    }
    return 0;
}
