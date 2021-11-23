#include <stdio.h>
#include <string.h>

void finder(char str[]){
    int n = strlen(str);
    int i=0;
    while(i<n){
        int count = 1;
        while(str[i] == str[i+1]) {count++;i++;}
        printf("%c%d",str[i],count);i++;
    }
}
int main(){
    char str[100];
    scanf("%s",str);
    finder(str);
    return 0;
}
