#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    while(n>0){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b >= 10 || a+c>=10 || c+b>=10){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        n--;

    }
    return 0;
}