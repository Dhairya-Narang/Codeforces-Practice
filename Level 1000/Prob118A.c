#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main(){
    char S[101];
    scanf("%s",S);
    for(int i=0;i<strlen(S);i++){
        if(isupper(S[i])){
            S[i]=tolower(S[i]);
        }
        if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u' || S[i]=='y'){
            continue;
        }else{
            printf(".%c",S[i]);
        }
    }
    return 0;
}