#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    char array[n][m];

    for(int i=0;i<n;i++){
        scanf("%s",array[i]);
    }
    int row1 = n;
    int row2 = 0;
    int col1 = m;
    int col2 = 0;
    for(int i=0;i<n;i++){
        for(int z=0;z<m;z++){
            if(array[i][z]=='*'){
                if(row1>i){
                    row1 = i;
                }
                if(row2<i){
                    row2 = i;
                }
                if(col1>z){
                    col1 = z;
                }
                if(col2<z){
                    col2 = z;
                }
            }
        }
    }
    for(int i=row1;i<=row2;i++){
        for(int z=col1;z<=col2;z++){
            printf("%c",array[i][z]);
        }
        printf("\n");
    }
    

}