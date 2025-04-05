#include <stdio.h>
int main() {
    char s[101];
    int al[26];
    scanf("%s",s);

    for(int i=0;i<26;i++){
        al[i]=-1;
    }

    for(int i=0;s[i]!='\0';i++){
        int result=s[i]-'a';
        if(al[result]==-1){
            al[result]=i;
        }
    }

    for(int i=0;i<26;i++){
        printf("%d ", al[i]);
    }
}