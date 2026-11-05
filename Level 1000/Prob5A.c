#include <stdio.h>
#include <string.h>

int main(){
    char line[256];
    int count=0;
    int ans=0;
    while(fgets(line, sizeof(line), stdin) != NULL){
        if(line[0]=='+'){
            count++;
        }else if(line[0]=='-'){
            count--;
        }else{
            for(int i=0;i<strlen(line);i++){
                if(line[i]==':'){
                    ans += count * (strlen(line)-i-2);
                    break;
                }
            }
        }
        
    }
    printf("%d",ans);
    return 0;
}