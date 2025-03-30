#include <stdio.h>
#include <string.h>
int main() {
    char arr[100];
    char w[100];
    scanf("%s",arr);
    int cnt=strlen(arr);
    for(int i=0;i<cnt;i++){
        w[i]=arr[cnt-1-i];
    }
    w[cnt]='\0';
    if(strcmp(arr,w)==0)
        printf("1");
    else
        printf("0");
}