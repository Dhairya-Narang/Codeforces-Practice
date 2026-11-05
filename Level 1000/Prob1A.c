#include <stdio.h>

int main(){
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    long long height=0 , weidth=0;
    if(c!=1){
        while (a>0 || b>0)
        {
            if(a>0){
                a-=c;
                height++;
            }
            if(b>0){
                b-=c;
                weidth++;
            }
        }
        printf("%lld",height*weidth);
    }else{
        printf("%lld",a*b);
    }
    
    return 0;
}