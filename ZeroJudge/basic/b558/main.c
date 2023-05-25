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
/*
#include <iostream>

int main(int argc, char** argv) {
  int myArray[500];
  myArray[0] = 1;
  int i = 0;
  for (i = 1; i<500; i++) {
    myArray[i] = (myArray[(i - 1)] + i);
  }
  int n;
  while (std::cin >> n){
    std::cout << myArray[(n - 1)]<<std::endl;;
  }

  return 0;
}
*/