#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        int start,end;
        int total=0;
        scanf("%d",&start);
        scanf("%d",&end);

        for (int j = start; j <= end; j++) {
            int root = sqrt(j);
            if(root * root == j){
                total+=j;
            }
        }
        printf("Case %d: %d\n",i+1,total);

    }
    return 0;
}
