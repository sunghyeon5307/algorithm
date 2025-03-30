#include <stdio.h>
int main(){
    int a,b,v,result=0;
    scanf("%d %d %d",&a,&b,&v);
    result=((v-b)%(a-b))+1;
    printf("%d",result);
}