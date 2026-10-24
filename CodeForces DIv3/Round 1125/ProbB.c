#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);

    while(t>0){
        int n;
        scanf("%d",&n);
        int *array = NULL;
        int capacity = 0;
        int count = 0;
        int x =0;

        for(int i=1;i<=n;i++){
            int a;
            scanf("%1d",&a);
            if(a==1){
                capacity++;
                int *temp = (int *)realloc(array, capacity * sizeof(int));
                if(temp!=NULL){
                    array = temp;
                }
                array[x] = i;
                x++;
                count++;
            }else if(a==2){
                if(x>0){
                    array[x-1] = i;
                }
            }
        }
        printf("%d\n",count);
        for(int i=0;i<capacity;i++){
            printf("%d ",array[i]);
        }
        printf("\n");
        free(array);


        t--;
    }
    return 0;
}