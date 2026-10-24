#include <stdio.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int a,b;
        scanf("%d %d",&a,&b);
        int count = 0;
        if(b!=1 && a!=1 && a>b){
            if(a-b>b){
                count = b;
            }else count = a-b;
        }else if(b==1 && a>b){
            count++;
        }
        if(count==0) printf("-1\n");
        else printf("%d\n",count);
        t--;
    }
    return 0;
}