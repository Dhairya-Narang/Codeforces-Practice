#include <stdio.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int n;
        char s[51];
        int count=0;
        scanf("%d %s",&n,s);
        for(int i=0;i<strlen(s);i++){
            for(int j=0;j<i;j++){
                if(s[i]==s[j]){
                    count--;
                    break;
                }
            }
            count+=2;
        }
        printf("%d\n",count);
        t--;
    }
    return 0;
}