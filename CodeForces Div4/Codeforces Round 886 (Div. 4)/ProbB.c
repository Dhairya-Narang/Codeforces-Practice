#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t>0)
    {
        int n;
        scanf("%d",&n);
        int max=0,ans=0;
        for(int i=1;i>=n;i++)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            if(a<=10 && max<b){
                max = b;
                ans = i;
            }
        }
        printf("%d\n",ans);
        t--;
    }
    return 0;
}