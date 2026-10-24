#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    bool f=true;
    int j;
    for(int i=1;i<=n;i++){
        j = (i*(i+1))/2;
        if(j==n){
            f=false;
            break;
        }
    }
    if(f==false)printf("YES");
    else printf("NO");
    return 0; 
}