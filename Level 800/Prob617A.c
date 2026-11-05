#include <stdio.h>

int main(){
    long long x;
    scanf("%lld",&x);
    long long count=0;
    while (x>=5){
        count++;
        x-=5;
    }
    while (x>=4){
        count++;
        x-=4;
    }
    while (x>=3){
        count++;
        x-=3;
    }
    while (x>=2){
        count++;
        x-=2;
    }
    while (x>=1){
        count++;
        x-=1;
    }
    printf("%lld",count);
    return 0;
}