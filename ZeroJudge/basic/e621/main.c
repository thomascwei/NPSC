#include <stdio.h>

int main()
{
    int N,a,b,c;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int count=0;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        for (int j = a+1; j < b; j++) {
            if(j%c!=0){
                count++;
                printf("%d ",j);
            }
        }
        if(count==0){
            printf("No free parking spaces.");
        }
        printf("\n");
    }

    return 0;
}