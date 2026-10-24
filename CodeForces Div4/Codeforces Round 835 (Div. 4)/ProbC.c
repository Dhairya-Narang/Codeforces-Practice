#include <stdio.h>


int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int n;
        scanf("%d",&n);
        long long arr[n];
        long long max1 = 0,max2=0;
        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i]);
            if(arr[i] > max1){
                max2 = max1;
                max1 = arr[i];
            } else if (arr[i] > max2){
                max2 = arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(max1!=max2){
                if(arr[i]!=max1){
                    printf("%lld ",arr[i]-max1);
                }else{
                    printf("%lld ",arr[i]-max2);
                }
            }else{
                printf("%lld ",arr[i]-max1);

            }
        }
        printf("\n");
        t--;
    }
    return 0;
}