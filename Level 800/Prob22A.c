#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool f = true;
    scanf("%d", &n);
    int array[n];
    int min = 100000;
    int second_min = 100000;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        if(array[0]!=array[i]){
            f=false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (min > array[i])
        {
            second_min = min;
            min = array[i];
        }
        else if (second_min > array[i] && array[i] > min)
        {
            second_min = array[i];
        }
    }
    if (n <= 1)
    {
        printf("NO");
    }else if(f==true){
        printf("NO");
    }
    else if(min < second_min)
    {
        printf("%d", second_min);
    }
    else
    {
        printf("NO");
    }
    return 0;
}