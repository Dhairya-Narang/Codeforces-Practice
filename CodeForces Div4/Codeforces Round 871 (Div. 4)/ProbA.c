#include <stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
        char S[11];
        scanf("%s",S);
        int count = 0;
        if(S[0] != 'c'){
            count++;
        }
        if(S[1] != 'o'){
            count++;
        }
        if(S[2] != 'd'){
            count++;
        }
        if(S[3] != 'e'){
            count++;
        }
        if(S[4] != 'f'){
            count++;
        }
        if(S[5] != 'o'){
            count++;
        }
        if(S[6] != 'r'){
            count++;
        }
        if(S[7] != 'c'){
            count++;
        }
        if(S[8] != 'e'){
            count++;
        }
        if(S[9] != 's'){
            count++;
        }
        printf("%d\n",count);
        t--;
    }
    return 0;
}