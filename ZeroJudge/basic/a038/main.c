#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input;
    scanf("%d",&input);
    int reverse=0;
    while (1)
    {
        if (input/10!=0)
        {
            reverse= reverse * 10 + input % 10;
            input =input/10;
        }
        else{
            reverse = reverse * 10 + input;
            break;
        }
    }
    printf("%d\n", reverse);
    return 0;
}
