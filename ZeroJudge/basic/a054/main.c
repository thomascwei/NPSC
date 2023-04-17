#include <stdio.h>

int main()
{
    int local[26]={ 10,11,12,13,14,15,16,17,34,18,19,20,21,
                    22,35,23,24,25,26,27,28,29,32,30,31,33
    };

    int n;
    int alphabet;
    scanf("%d",&n);
    int check=n%10;
    n=n/10;
    int total=0;
    for (int i = 1; i < 9; i++) {
        total+=(n%10)*i;
        n=n/10;
    }

    for (int i = 0; i < 26; i++) {
        alphabet=local[i];
        if((10-(total+alphabet/10+alphabet%10*9)%10)%10==check){
            printf("%c",'A'+i);
        }
    }

    return 0;
}
