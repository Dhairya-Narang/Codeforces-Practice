#include <stdio.h>

int main(){
    int n;
    long long d;
    scanf("%d %lld",&n,&d);
    int array[n];

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    int count = 0;

    for(int z=0;z<n;z++){
        for(int y=0;y<n;y++){
            if(y!=z){
                if(array[z]-array[y]<=d && array[z]-array[y]>= -d){
                    count++;
                }
            }
        }
    }

    printf("%d",count);
    return 0;


}