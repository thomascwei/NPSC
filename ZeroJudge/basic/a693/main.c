#include <stdio.h>

int main()
{

    int n,m ;
    int s,e;
    while(scanf("%d %d",&n,&m)!=EOF){
        int fullDegree[n];
        for (int i = 0; i < n; i++) {
            scanf("%d",&fullDegree[i]);
        }
        for (int i = 0; i < m; i++) {
            int total=0;
            scanf("%d %d",&s,&e);
            for (int j = s; j <= e; j++) {
                total+=fullDegree[j-1];
            }
            printf("%d\n",total);
        }

    }


    return 0;
}
