#include <stdio.h>

int unique(long arr[],long len){
    long ans = arr[0];
    for(long i = 1;i<len;i++){
        ans^=arr[i];
    }
    printf("%d\n",ans);
    return 0;
}

int main(){
    int t;
    scanf("%d",&t);
    
    for(int i = 0;i<t;i++){
        long len;
        scanf("%d",&len);
        // printf("length is %d\n",len);
        long arr[100000];
        for(int i =0;i<len;i++){
            scanf("%d",&arr[i]);
        }
        unique(arr,len);
    }
    
    return 0;
}