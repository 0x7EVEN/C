#include <stdio.h>
int per(int arr[],int l,int h){
  	int newarr[6];	
  	for(int i =0;i<=h;i++){
    	newarr[i] = arr[i];
    }
	if(l == h){
    	for(int i = 0;i <= h;i++){
        	printf("%d ",newarr[i]);
        }
      	printf("\n");
      	return 0;
    } else {
    	for(int i = l;i<=h;i++){
          	int temp = newarr[l];
          	newarr[l] = newarr[i];     //pointers is better way to do this...will commit soon
          	newarr[i] = temp;
          	per(newarr,l+1,h);
        }
    }
  	
}
int main(){
	int n;
  	scanf("%d",&n);
  	int arr[6];
	for(int i = 0;i<n;i++){
    		int el;
      		scanf("%d",&el);
      		arr[i] = el;
    }
  	per(arr,0,n-1);
}
