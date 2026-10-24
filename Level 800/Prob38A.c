#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    int array[n-1];
    for(int i=0;i<n-1;i++){
        scanf("%d",&array[i]);
    }

    int a,b;
    scanf("%d %d",&a,&b);

    int sum = 0;
    for(int i=a-1;i<b-1;i++){
        sum += array[i];
    }

    printf("%d",sum);
    return 0;
}