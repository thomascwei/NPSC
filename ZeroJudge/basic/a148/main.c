#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
        int temp;
        double total=0;
        for (int i = 0; i < n; i++) {
            scanf("%d",&temp);
            total+=temp;
        }
        if(total/n>59){
            printf("no\n");
        }else{
            printf("yes\n");
        }
    }
    return 0;
}
