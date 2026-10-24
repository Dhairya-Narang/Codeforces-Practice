#include <stdio.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t>0){
        int n;
        scanf("%d",&n);
        int array[n];
        int count=0;
        
        for(int z=0;z<n;z++){
            scanf("%d",&array[z]);
        }

        for(int i=0;i<n;i++){
            for(int z=0;z<i;z++){
                for(int j=z;j<i;j++){
                    int sum = 0; 
                    for(int k=z;k<=j;k++){
                        // printf("%d ",array[k]);
                        sum += array[k];
                    }
                    // printf("\n");
                    if(sum==array[i]){
                        count++;
                        break;
                    }
                }
            }

        }

        
        
        
        printf("%d\n",count);
        t--;
    }
    return 0;
    
}