#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(n>40){
        printf("%d",100);
        return 0;
    }
    if(n>20){
        printf("%d",80 + n - 20);
        return 0;
    }
    if(n>10){
        printf("%d",60 + (n - 10)*2);
        return 0;
    }
    printf("%d",n*6);
    return 0;
}
