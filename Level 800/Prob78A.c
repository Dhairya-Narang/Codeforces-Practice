#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    int t=0;
    bool f=true;
    while(t<3){
        int count=0;
        char S[500];
        if (fgets(S, sizeof(S), stdin) != NULL){
        S[strcspn(S, "\n")] = '\0';
        int z = strlen(S)-1;
            while(z>=0){
                    if(S[z]=='A' || S[z]=='a' || S[z]=='E' || S[z]=='e' ||S[z]=='I' || S[z]=='i' || S[z]=='o' || S[z]=='O' || S[z]=='U' || S[z]=='u'){
                        count++;
                    }
                z--;
            }
        }
        if(t%2==0){
            if(count!=5){
                f=false;
                break;
            }
        }else{
            if(count!=7){
                f=false;
                break;
            }
        }
        t++;
    }
    if(f==true){printf("YES");}
    else{printf("NO");}
    return 0;
}