
#include <stdio.h>
#include <stdbool.h>
 
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(n>=m){
        printf("NO");
        return 0;
    }
    for(int i=n+1;i<=50;i++){
        bool f=true;
       for(long long z=2;z*z<=i;z++){
            if(i%z==0){
                f=false;
                break;
            }
        }
        if(f==true){
            if(i==m){
                printf("YES");
            }else{
                printf("NO");
            }
            return 0;
        }
    }
    if(m==50 || m==49 || m==48){printf("NO");}
    return 0;
}