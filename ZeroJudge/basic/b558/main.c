#include <stdio.h>

int main()
{
    int n;
    int ans[500]={0};
    ans[0]=1;
    for(int i=1;i<500;i++){
        ans[i]=i+ans[i-1];
    }
    while(scanf("%d",&n)!=EOF){
        printf("%d\n",ans[n-1]);
    }
    return 0;
}
