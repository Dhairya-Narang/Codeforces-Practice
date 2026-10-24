#include <stdio.h>

int main(){
    int Y,W;
    scanf("%d %d",&Y,&W);
    if(W>Y){
        int temp = W;
        W = Y;
        Y = temp;
    }
    if(Y==1){
        printf("1/1");
    }else if(Y==2){
        printf("5/6");
    }else if(Y==3){
        printf("2/3");
    }else if(Y==4){
        printf("1/2");
    }else if(Y==5){
        printf("1/3");
    }else if(Y==6){
        printf("1/6");
    }

}