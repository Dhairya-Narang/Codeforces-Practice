#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int n;
        scanf("%d",&n);
        char S[n+1];
        scanf("%s",S);
        int x=0,y=0;
        bool f = false;
        for(int i=0;i<strlen(S);i++){
            if(S[i]=='U'){
                y++;
            }else if(S[i]=='D'){
                y--;
            }else if (S[i]=='R'){
                x++;
            }else{
                x--;
            }
            if(x==1 && y==1){
                f=true;
                break;
            }
        }
        if(f==true){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        t--;
    }
    return 0;
    
}