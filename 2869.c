// #include <stdio.h>
// int main(){
//     int a,b,v,result=0,cnt=0;
//     scanf("%d %d %d", &a,&b,&v);
//     while(1){
//         result+=a;
//         if(result>=v)
//             break;
//         result-=b;
//         cnt++;
//     }
//     printf("%d",cnt+1);
// }
#include <stdio.h>
int main(){
    int a,b,v,result=0;
    scanf("%d %d %d",&a,&b,&v);
    result=(v-b-1)/(a-b)+1;
    printf("%d",result);
}