#include <stdio.h>
#include <string.h>

int main(){
    char s1[101],s2[100],s3[100];
    scanf("%s %s",s1,s2);
    for(int i=0;i<strlen(s1);i++){
        if(s1[i]==s2[i]){
            s3[i] = '0'; 
        }else s3[i] = '1';
    }
    printf("%s",s3);
    return 0;
}