#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t>0){
        char n[101];
        scanf("%s",n);
        if(strlen(n)>10){
            printf("%c%lu%c\n",n[0],strlen(n)-2,n[strlen(n)-1]);
        }else{printf("%s\n",n);}
        t--;
    }
    return 0;
    
}