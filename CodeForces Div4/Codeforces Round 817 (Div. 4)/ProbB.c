#include <stdio.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int n;
        scanf("%d",&n);
        char S[n],A[n];
        scanf("%s %s",S,A);
        bool f=true;
        for(int i=0;i<n;i++){
            if(A[i]=='G' || A[i]=='B'){
                if(S[i]!='G' && S[i]!='B'){
                    f=false;
                    break;
                }
            }else{
                if(S[i]!='R'){
                    f=false;
                    break;
                }
            }
        }
        if(f==true){printf("YES\n");}
        else{printf("NO\n");}
        t--;
    }
    return 0;
}