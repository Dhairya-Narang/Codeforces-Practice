#include <stdio.h>
#include <stdbool.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        char s[8][8];
        for (int i = 0; i < 8; i++) {
        scanf("%s", s[i]);
        }
        bool f=true;
        for(int i=0;i<8;i++){
            f=true;
            for(int j=0;j<8;j++){
                if(s[i][j]!='R'){
                    f=false;
                }
            }
            if(f==true){
                break;
            }
        }
        if(f==true){printf("R\n");}
        else{printf("B\n");}
        t--;
    }
    return 0;
    
}