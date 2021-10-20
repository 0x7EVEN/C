#include <stdio.h>
int findLowerBound(int arr[],int n,int k){
    int ans = -1;
  	int low = 0;
  	int high = n-1;
  	while(low <= high){
   		int mid = low + (high - low)/2; 
    	if(arr[mid] == k){
        	ans = mid;
          	high = mid -1;
        }else if (arr[mid] < k){
        	low = mid  +1 ;
        }else {
        	high = mid -1 ;
        }
    }
	return ans;
}
int main(){
  	int n,k;
  	scanf("%d",&n);
  	scanf("%d",&k);
  	int arr[n];
  	for(int i= 0;i<n;i++){
    	scanf("%d",&arr[i]);
    }  	printf("%d",findLowerBound(arr,n,k));
}
