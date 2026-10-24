#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t>0){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++){
            int a;
            scanf("%d",&a);
            char arr1[a];
            scanf("%s",arr1);
            for(int j=0;j<a;j++){
                if(arr1[j]=='U'){
                    if(arr[i]==0){
                        arr[i]=10;
                    }  
                    arr[i]--;
                }else{
                    if(arr[i]==9){
                        arr[i]=-1;
                    }  
                    arr[i]++;
                }
            }
            
        }
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");

        t--;
    }
    return 0;
    
}