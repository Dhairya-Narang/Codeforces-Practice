#include <stdio.h>
#include <stdbool.h>

int compare(void const *a, void const *b){
    return(*(int*)a - *(int*)b);
}

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int n;
        scanf("%d",&n);
        long long arr[n];
        bool f=true;
        for(int i=0;i<n;i++){
            scanf("%lld",&arr[i]);
        }
        qsort(arr,n,sizeof(int),compare);
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                f=false;
                break;
            }
        }
        if(f==true){printf("YES\n");}
        else{printf("NO\n");}
        t--;
    }
    return 0;
}