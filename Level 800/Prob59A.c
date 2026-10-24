#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char S[100];
    scanf("%s",S);
    int count_u=0,count_l=0;
    for(int i=0;i<strlen(S);i++){
        if(isupper(S[i])){
            count_u++;
        }else count_l++;
    }
    if(count_l>=count_u){
        for(int i=0;i<strlen(S);i++){
            S[i]= tolower(S[i]);
        }
    }else{
        for(int i=0;i<strlen(S);i++){
            S[i]= toupper(S[i]);
        }
    }
    printf("%s",S);
    return 0;
}