#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int array[6];
        for(int i=0;i<6;i++){
        scanf("%1d",&array[i]);
        }
        if(array[0]+array[1]+array[2]==array[3]+array[4]+array[5]){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        t--;
    }
}