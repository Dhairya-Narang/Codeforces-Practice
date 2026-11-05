#include <stdio.h>
#include <string.h>

int main(){
    int x;
    scanf("%d",&x);
    while (x>0)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        char A[a+1],B[b+1];
        if(a==b+3){
            scanf("%s %s",A,B);
            for(int i=0;i<a;i++){
                for(int j=0;j<b;j++){
                    if(A[i]==B[j]){
                        A[i] = '#';
                        B[j] = '#';
                        break;
                    }
                }
            }
            char S[100];
            int ind = 0;
            for(int i=0;i<a;i++){
                if(A[i]!='#'){
                    S[ind++]=A[i];
                }
            }
            S[ind] = '\0';
            if(strcmp(S, "sin") || strcmp(S, "ins") ||  strcmp(S, "nsi") || strcmp(S, "nis") || strcmp(S, "sni") || strcmp(S, "nsi")){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }else{
            char dummy[100],dummy1[100];
            scanf("%s %s",dummy,dummy1);
            printf("NO\n");
        }
        x--;
    }
    return 0;
}