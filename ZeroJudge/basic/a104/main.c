#include <stdio.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main() {
    int n;
    while(scanf("%d",&n)!=EOF){
        int values[n];

    for (int i = 0; i < n; i++) {
    scanf("%d",&values[i]);
    }


    qsort(values, n, sizeof(int), cmpfunc);

    for( int i = 0 ; i < n; i++ ) {
      printf("%d ", values[i]);
    }
    printf("\n");
    }
    return 0;
}