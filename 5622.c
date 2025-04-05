#include <stdio.h>
#include <string.h>
int main(){
    char s[16];
    char al[27]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    
    scanf("%s", s);
    int cnt=strlen(s),result=0;
    for(int i=0;i<cnt;i++){
        int inx=s[i]-'A';
        result+=al[inx];
    }
    printf("%d",result);
    return 0;
}