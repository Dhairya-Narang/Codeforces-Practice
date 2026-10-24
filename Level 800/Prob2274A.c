#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t>0){
        int n;
        scanf("%d",&n);
        int arr[n];
        int ans=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(i%2==0){
                ans += arr[i];
            }else{
                ans -= arr[i];
            }
        }
        printf("%d\n",ans);
        t--;
    }
    return 0;
}