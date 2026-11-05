#include <stdio.h>


int main(){
    int t;
    scanf("%d",&t);
    while (t>0)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if((a>0 && b>0) || (a<0 && b<0)){
            printf("%d\n",b-a);
        }else if(a==0 && b>0){
            printf("%d\n",b-1);
        }else if(b==0 && a<0){
            printf("%d\n",-a-1);
        }else{
            if(-a>b){
                if(-a-b>1){
                    printf("%d\n",-a-b-1);
                }else{
                    printf("0\n");
                }
            }else{
                if(b+a>1){
                    printf("%d\n",a+b-1);
                }else{
                    printf("0\n");
                }

            }
        }
        t--;
    }
    
    return 0;
}