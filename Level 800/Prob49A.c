#include <stdio.h>
#include <string.h>

int main(){
    char S[101];
    if (fgets(S, sizeof(S), stdin) != NULL){
    S[strcspn(S, "\n")] = '\0';
    int z = strlen(S)-1;
    while(z>=0){
            if(S[z]=='Y' || S[z]=='y' || S[z]=='A' || S[z]=='a' || S[z]=='E' || S[z]=='e' ||S[z]=='I' || S[z]=='i' || S[z]=='o' || S[z]=='O' || S[z]=='U' || S[z]=='u'){
                printf("YES");
                break;
            }else if(S[z]=='?' || S[z]==' '){
                z--;
                continue;
            }else{
                printf("NO");
                break;
            }
        z--;
    }
    }
    return 0;
}