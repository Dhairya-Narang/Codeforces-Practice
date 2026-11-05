#include <stdio.h>


int main(){
    int a,b;
    char c,d;
    scanf("%c%d %c%d",&c,&a,&d,&b);
    int e = c-'0';
    int f = d-'0';
    int sum,sum1;
    if(a-b>0) sum = a-b;
    else sum = b-a;
    if(e-f>0) sum1 = e-f;
    else sum1 = f-e;
    if(sum1>sum){
        printf("%d\n",sum1);
        sum1 = -e+f;
        sum = -a+b;
    }else{
        printf("%d\n",sum);
        sum1 = -e+f;
        sum = -a+b;
    }
    while(sum1!=0 || sum!=0){
        if (sum1 > 0 && sum > 0) {
            printf("RU\n");
            sum1--; sum--;
        } else if (sum1 > 0 && sum < 0) {
            printf("RD\n");
            sum1--; sum++;
        } else if (sum1 < 0 && sum > 0) {
            printf("LU\n");
            sum1++; sum--;
        } else if (sum1 < 0 && sum < 0) {
            printf("LD\n");
            sum1++; sum++;
        }else if(sum1 > 0){
            printf("R\n");
            sum1--;
        }else if(sum1 < 0){
            printf("L\n");
            sum1++;
        }else if(sum < 0){
            printf("D\n");
            sum++;
        }else if(sum > 0){
            printf("U\n");
            sum--;
        }
    }
    return 0;
}