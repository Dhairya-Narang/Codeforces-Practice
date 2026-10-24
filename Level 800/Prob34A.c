#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int array[n];

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    int ans1;
    int ans2;
    int answer = 2000;
    for(int i=0;i<n;i++){
        int res = abs(array[i] - array[i+1]);
        if(res<answer){
            answer = res;
            ans1 = i+1;
            ans2 = i+2;
        }
    }
    int res = abs(array[0] - array[n-1]);
    if(res<answer){
        answer = res;
        ans1 = 1;
        ans2 = n;
    }

    printf("%d %d",ans1,ans2);
    return 0;
}