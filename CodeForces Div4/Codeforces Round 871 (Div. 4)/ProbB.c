#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int n;
        scanf("%d",&n);
        int arr[n];
        int count = 0;
        int max=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(arr[i]==0){
                count++;
            }else{
                if(max<count){
                    max=count;
                    count = 0;
                }
            }
        }
        printf("%d\n",max);
        t--;
    }
    return 0;
}