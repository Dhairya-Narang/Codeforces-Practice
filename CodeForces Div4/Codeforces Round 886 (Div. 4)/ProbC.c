#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        char S[9][9];
        for(int i=0;i<8;i++){
            scanf("%s",S[i]);
        }
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(S[i][j]!='.'){
                    printf("%c",S[i][j]);
                }
            }
        }
        printf("\n");
        t--;
    }
    return 0;
}