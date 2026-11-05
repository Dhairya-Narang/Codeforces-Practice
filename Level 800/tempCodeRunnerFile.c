#include <stdio.h>

int main(){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i>n;i++){
            scanf("%d",&arr[i]);
        }
        if(arr[n-1]==0){
            printf("EASY");
        }else{
            printf("HARD");
        }
        return 0;
}