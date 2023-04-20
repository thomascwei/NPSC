#include <stdio.h>
#include <stdlib.h>

int
main ()
{
    char password[7];
    scanf("%s",password);
    for (int i = 0; i < 6; i++) {
        printf("%d",abs(password[i+1]-password[i]));
    }

    return 0;
}
