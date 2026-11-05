#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        int n;
        scanf("%d",&n);
        int arr[n];
        int Mihai=0,Bianca=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(arr[i]%2==0){
                Mihai+=arr[i];
            }else{
                Bianca+=arr[i];
            }
        }
        if(Mihai>Bianca){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        t--;
    }
    return 0;
}