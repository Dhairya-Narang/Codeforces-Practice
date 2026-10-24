#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        char a;
        scanf(" %c",&a);
        if(strchr("codeforcse",a)!=NULL){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        t--;
    }
    
}