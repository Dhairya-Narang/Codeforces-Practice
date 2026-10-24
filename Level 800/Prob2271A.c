#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int x,y;
        scanf("%d %d",&x,&y);
        if(x==y){
            printf("%d\n",x);
        }else if((x-y)%2==0 && x>y){
            printf("%d\n",x);
        }else if(1+x==y ||((x-y)%2!=0 && x>y)){
            printf("%d\n",x+1);
        }else{
            printf("-1\n");
        }
        t--;
    }
    return 0;
}