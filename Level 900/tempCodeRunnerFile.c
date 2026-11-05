#include <stdio.h>


int main(){
    long long n,k;
    scanf("%lld %lld",&n,&k);
    if(n/2>=k){
        printf("%lld",1+((k-1)*2));
    }else{
        printf("%lld",((k-n/2)-1)*2);
    }
    return 0;
}