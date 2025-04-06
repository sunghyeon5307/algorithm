#include <stdio.h>
int main() {
    char s[1000000];
    int al[26]={0};
    int result=0,max=0,x;
    int cnt=0;

    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A'&&s[i]<='Z'){
            result=s[i]-'A';
            al[result]+=1;
            result=0;
        } else if(s[i]>='a'&&s[i]<='z'){
            result=s[i]-'a';
            al[result]+=1;
            result=0;
        }
    }
    for(int i=0;i<26;i++){
       if(max<al[i]){
        max=al[i];
        cnt=i;
       } else if(al[i]==max){
        x=1;
       }
    }
    if(x){
        printf("?");
    } else{
        printf("%c\n",cnt+'A');
    }
}
