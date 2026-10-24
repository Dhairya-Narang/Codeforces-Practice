#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        char S[4];
        scanf("%s",S);
        if((S[0] == 'Y'|| S[0]=='y') &&(S[1]=='e' || S[1]=='E') && (S[2]=='S' || S[2]=='s')){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        t--;
    }
    return 0;
}