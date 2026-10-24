#include <stdio.h>
#include <stdbool.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int array[n][m];
    bool f=false;
    for(int i=0;i<n;i++){
        for(int z=0;z<m;z++){
            scanf("%1d",&array[i][z]);
            if(array[i][0]!=array[i][z]){
                f=true;
                break;
            }
        }
        if(i>0 && i<n-1){
            if(array[i][0]!=array[i+1][0] || f==true){
                f=true;
                break;
            }
        }
    }
    if(f==true){
        printf("NO");
    }else{
        printf("YES");
    }
    return 0;
}