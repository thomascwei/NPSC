#include <stdio.h>

int main(){
    // n個圓最多可以把平面分割成n*n-n+2
    int n;
    while(scanf("%d",&n)!=EOF){
        printf("%d\n",n*n-n+2);
    }
    return 0;
}