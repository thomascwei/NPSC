#include <stdio.h>
#include <math.h>

int main (){
    int n, m;
    int result=0;
    scanf ("%d %d", &n, &m);

    for (int i = n; i <= m; i++){
        // printf("current:%d\n",i);
        int origin=i;
        int current=i;
        int digits = 1;
        int sum = 0;
        int count[10] = { 0 };
        while (current / 10 > 0){
    	  digits++;
    	  count[current % 10]++;
    	  current = current / 10;
    	}
        count[current]++;
        for (int j = 1; j < 10; j++){
    	  sum += pow (j, digits) * count[j];
    	}
        // printf("sum:%d\n",sum);
        if (origin == sum){
    	  printf ("%d ",origin);
    	  result++;
    	}
    }
    if(result==0){
        printf("none");
    }

  return 0;
}
