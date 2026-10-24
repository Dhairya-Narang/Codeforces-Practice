#include <stdio.h>

int main(){
    char a[3],b[3],c[3];
    scanf("%s %s %s",a,b,c);
    printf("%s %s %s",a,b,c);

    if(a[0]==c[2] && a[1]==c[1] && a[2]==c[0] && b[0]==b[2]){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}