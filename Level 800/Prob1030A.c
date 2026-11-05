#include <stdio.h>
#include <stdbool.h>

int main(){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        bool f=true;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                printf("HARD");
                f=false;
                break;
            }
        }
        if(f==true){printf("EASY");}

        
        return 0;
}