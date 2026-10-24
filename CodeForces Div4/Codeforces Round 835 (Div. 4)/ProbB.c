#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int n;
        scanf("%d",&n);
        char S[n+1];
        scanf("%s",S);
        int max=0;
        for(int i=0;i<strlen(S);i++){
            int x = S[i] - 'a' + 1;
            if(x>max){
                max=x;
            }
        }
        printf("%d\n",max);
        t--;
    }
    return 0;
}