#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int i=1;
    while (m >= i){
        m -= i;
        i++;
        if(n<i){
            i=1;
        }
    }
    printf("%d",m);
    return 0;
}