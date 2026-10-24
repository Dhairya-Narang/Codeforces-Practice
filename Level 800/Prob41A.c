#include <stdio.h>
#include <string.h>

int main(){
    char S[101],S1[101];
    scanf("%s %s",S,S1);

    for(int i=0;i<strlen(S)/2;i++){
        char temp = S[i];
        S[i] = S[strlen(S)-i-1];
        S[strlen(S)-i-1] = temp;
    }

    if(strcmp(S,S1)==0){
        printf("YES");
    }else{
        printf("NO");
    }
}