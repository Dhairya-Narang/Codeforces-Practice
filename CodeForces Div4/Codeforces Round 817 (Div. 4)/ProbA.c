#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int n;
        char s[1000];
        scanf("%d %s",&n,s);
        if(n!=5){
            printf("NO\n");
        }else{
            int arr[5]={0};
            for(int i=0;i<5;i++){
                if(s[i]=='T'){
                    arr[0]++;

                }else if( s[i]=='i'){
                    arr[1]++;
                }
                else if( s[i]=='m'){
                    arr[2]++;
                }
                else if( s[i]=='r'){
                    arr[3]++;
                }
                else if( s[i]=='u'){
                    arr[4]++;
                }
            }
            bool f=true;
            for(int i=0;i<5;i++){
                if(arr[i]!=1){
                    f=false;
                    break;
                }
            }
            if(f==true){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
        
         t--;
    }
    return 0;
}