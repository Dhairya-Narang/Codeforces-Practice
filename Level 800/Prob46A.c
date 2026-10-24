#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1,j=2;i<=n-1;i++,j+=i){
        if(j>n){
            j-=n;
        }
        printf("%d ",j);
    }
}