#include <stdio.h>
#include <string.h>

int main(){
    char S[201];
    scanf("%s",S);

    for(int i=0;i<strlen(S);i++){
        if(S[i]=='-' && S[i+1]=='.'){
            printf("1");
            i++;
        }else if(S[i]=='-' && S[i+1]=='-'){
            printf("2");
            i++;
        }else if(S[i]=='.'){
            printf("0");
        }
    }
    return 0;
}