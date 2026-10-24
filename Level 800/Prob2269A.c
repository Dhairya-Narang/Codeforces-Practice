#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t>0){
        int n,k;
        scanf("%d %d",&n,&k);
        int card = 0;
        if(k!=1){
            int z=k-1;
            card += 2*z;
            n -= z;
        }
        int x=1;
        for(int i=0;i<n;i++){
            x*=2;
        }
        card+=x;
        printf("%d\n",card);
        t--;
    }
    return 0;
    
}