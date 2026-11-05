#include <stdio.h>
#include <stdlib.h>

int compare(void const *a,void const *b){
    return (*(long long*)a - *(long long*)b);
}

int main(){
    int t;
    scanf("%d",&t);
    while (t>0)
    {
        long long n,k;
        scanf("%lld %lld",&n,&k);
        long long arr[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i]);
        }
        qsort(arr,n,sizeof(long long),compare);
        int count = 1;
        int max = 1;
        for(int i=1;i<n;i++){
            if(arr[i] - arr[i-1] <= k){
                count++;
            }else{
                count = 1;
            }
            if(count>max){
                max = count;
            }
        }
        printf("%lld\n",n-max);
        
        t--;
    }
    return 0;
}