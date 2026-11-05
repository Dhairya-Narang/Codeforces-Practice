#include <stdio.h>


int main(){
    long long n,k;
    scanf("%lld %lld",&n,&k);
    if(n/2>=k){
        printf("%lld",1+((k-1)*2));
    }else{
        if(n%2==0){
            printf("%lld",(2+((k-n/2)-1)*2));
        }else{
            if(n/2+1==k){
                printf("%lld",n);
            }else{
                printf("%lld",(((k-n/2)-1)*2));
            }
        }
    }
    return 0;
}