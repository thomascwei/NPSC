#include <stdio.h>

int main()
{
    int M,D;
    scanf("%d %d",&M,&D);
    int S=(M*2+D)%3;
    switch(S){
        case 0:
            printf("普通");
            break;
        case 1:
            printf("吉");
            break;
        case 2:
            printf("大吉");
    }
    return 0;
}