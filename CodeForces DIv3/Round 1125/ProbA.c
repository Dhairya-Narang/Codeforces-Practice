#include <stdio.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t>0){
        int x,y,R;
        scanf("%d %d %d",&x,&y,&R);

        int ans1,ans2;
        ans1 = x;
        ans2 = y-R;

        printf("%d %d\n",ans1,ans2);

        t--;
    }
    return 0;
}