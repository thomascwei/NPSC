#include <stdio.h>
#include <stdlib.h>

int main(){
    int row,col;
    while(scanf("%d %d",&row,&col)!=EOF){
        int **array;
        array = (int **)malloc(row * sizeof(int *));
        for (int i = 0; i < row; i++) {
            array[i] = (int *)malloc(col * sizeof(int));
        }

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                scanf("%d",&array[i][j]);
            }
        }

        for (int i = 0; i < col; i++) {
            for (int j = 0; j < row; j++) {
                printf("%d ",array[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}