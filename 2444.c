#include <stdio.h>
int main() {
    int n,cnt=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++)
            printf(" ");
        for(int k=0;k<i+(i-1);k++)
            printf("*");
        printf("\n");
    }
    for(int i=n;i>0;i--){
        cnt++;
        for(int j=0;j<cnt;j++)
            printf(" ");
        for(int k=0;k<i+(i-3);k++)
            printf("*");
        printf("\n");
    }
    return 0;
}